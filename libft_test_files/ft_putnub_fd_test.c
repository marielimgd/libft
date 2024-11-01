/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnub_fd_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marielidias <marielidias@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:30:37 by marielidias       #+#    #+#             */
/*   Updated: 2024/11/01 12:33:18 by marielidias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "minunit.h"

// Declare the function being tested
void ft_putnbr_fd(int n, int fd);

// Test counter
int g_tests_run = 0;

// Helper function to capture output
#define BUFFER_SIZE 256
char output_buffer[BUFFER_SIZE];

// Test cases

char *test_ft_putnbr_fd_zero() {
    int fd[2]; // Create a pipe
    pipe(fd); // Create a pipe to capture output

    ft_putnbr_fd(0, fd[1]); // Write output to the pipe
    close(fd[1]); // Close the write end of the pipe

    read(fd[0], output_buffer, BUFFER_SIZE); // Read the output from the pipe
    output_buffer[BUFFER_SIZE - 1] = '\0'; // Null-terminate

    MU_ASSERT("Error: ft_putnbr_fd did not output '0'", strcmp(output_buffer, "0") == 0);
    close(fd[0]); // Close the read end of the pipe
    return 0;
}

char *test_ft_putnbr_fd_positive() {
    int fd[2];
    pipe(fd);

    ft_putnbr_fd(123, fd[1]);
    close(fd[1]);

    read(fd[0], output_buffer, BUFFER_SIZE);
    output_buffer[BUFFER_SIZE - 1] = '\0';

    MU_ASSERT("Error: ft_putnbr_fd did not output '123'", strcmp(output_buffer, "123") == 0);
    close(fd[0]);
    return 0;
}

char *test_ft_putnbr_fd_negative() {
    int fd[2];
    pipe(fd);

    ft_putnbr_fd(-456, fd[1]);
    close(fd[1]);

    read(fd[0], output_buffer, BUFFER_SIZE);
    output_buffer[BUFFER_SIZE - 1] = '\0';

    MU_ASSERT("Error: ft_putnbr_fd did not output '-456'", strcmp(output_buffer, "-456") == 0);
    close(fd[0]);
    return 0;
}

char *test_ft_putnbr_fd_minimum_integer() {
    int fd[2];
    pipe(fd);

    ft_putnbr_fd(-2147483648, fd[1]);
    close(fd[1]);

    read(fd[0], output_buffer, BUFFER_SIZE);
    output_buffer[BUFFER_SIZE - 1] = '\0';

    MU_ASSERT("Error: ft_putnbr_fd did not output '-2147483648'", strcmp(output_buffer, "-2147483648") == 0);
    close(fd[0]);
    return 0;
}

// Test runner
char *all_tests() {
    MU_RUN_TEST(test_ft_putnbr_fd_zero);
    MU_RUN_TEST(test_ft_putnbr_fd_positive);
    MU_RUN_TEST(test_ft_putnbr_fd_negative);
    MU_RUN_TEST(test_ft_putnbr_fd_minimum_integer);
    return 0;
}

int main() {
    char *result = all_tests();
    if (result != 0) {
        printf("%s\n", result);
    } else {
        printf("ALL TESTS PASSED\n");
    }
    printf("Tests run: %d\n", g_tests_run);
    return result != 0;
}

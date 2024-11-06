/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marielidias <marielidias@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:04:07 by marielidias       #+#    #+#             */
/*   Updated: 2024/11/06 11:04:08 by marielidias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t ft_strlcat(char *dest, const char *src, size_t destsize);

int main(void)
{
    char buffer1[20] = "Hello";
    char buffer2[10] = "Hi";
    char buffer3[6] = "Test";
    char buffer4[1] = ""; // Buffer with no space for characters, only null terminator
    const char *src = " World!";
    size_t result;

    // Test 1: Enough space to fully concatenate src to dest
    result = ft_strlcat(buffer1, src, sizeof(buffer1));
    printf("Test 1:\n");
    printf("Source: \"%s\"\n", src);
    printf("Destination after strlcat: \"%s\"\n", buffer1);
    printf("Expected total length (if enough space): %zu, Return value: %zu\n\n", strlen("Hello") + strlen(src), result);

    // Test 2: Partial concatenation due to limited dest buffer space
    result = ft_strlcat(buffer2, src, sizeof(buffer2));
    printf("Test 2:\n");
    printf("Source: \"%s\"\n", src);
    printf("Destination after strlcat: \"%s\"\n", buffer2);
    printf("Expected total length (if enough space): %zu, Return value: %zu\n\n", strlen("Hi") + strlen(src), result);

    // Test 3: Destination buffer too small to hold any of src, except null terminator
    result = ft_strlcat(buffer3, src, sizeof(buffer3));
    printf("Test 3:\n");
    printf("Source: \"%s\"\n", src);
    printf("Destination after strlcat: \"%s\"\n", buffer3);
    printf("Expected total length (if enough space): %zu, Return value: %zu\n\n", strlen("Test") + strlen(src), result);

    // Test 4: Destination buffer has zero usable space (size 1, only for null terminator)
    result = ft_strlcat(buffer4, src, sizeof(buffer4));
    printf("Test 4:\n");
    printf("Source: \"%s\"\n", src);
    printf("Destination after strlcat: \"%s\"\n", buffer4);
    printf("Expected total length (if enough space): %zu, Return value: %zu\n\n", strlen("") + strlen(src), result);

    return 0;
}
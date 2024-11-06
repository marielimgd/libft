/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marielidias <marielidias@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:02:53 by marielidias       #+#    #+#             */
/*   Updated: 2024/11/06 11:03:27 by marielidias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t ft_strlcpy(char *dest, const char *src, size_t destsize);

int main(void)
{
    char dest1[20];
    char dest2[5];
    char dest3[1];
    const char *src = "Hello, world!";
    size_t copied_len;

    copied_len = ft_strlcpy(dest1, src, sizeof(dest1));
    printf("Test 1:\n");
    printf("Source: \"%s\"\n", src);
    printf("Destination: \"%s\"\n", dest1);
    printf("Length of src: %zu, Return value: %zu\n\n", strlen(src), copied_len);

    copied_len = ft_strlcpy(dest2, src, sizeof(dest2));
    printf("Test 2:\n");
    printf("Source: \"%s\"\n", src);
    printf("Destination: \"%s\"\n", dest2);
    printf("Length of src: %zu, Return value: %zu\n\n", strlen(src), copied_len);

    copied_len = ft_strlcpy(dest3, src, sizeof(dest3));
    printf("Test 3:\n");
    printf("Source: \"%s\"\n", src);
    printf("Destination: \"%s\"\n", dest3);
    printf("Length of src: %zu, Return value: %zu\n\n", strlen(src), copied_len);

    return 0;
}

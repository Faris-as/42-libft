/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabdul-s <fabdul-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 01:48:48 by fabdul-s          #+#    #+#             */
/*   Updated: 2025/11/11 02:28:35 by fabdul-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void *ft_memcpy(void *s, const void *c, size_t len)
{
    unsigned char *ptr;
    const unsigned char *ptr2;
    size_t i;

    ptr = s;
    ptr2 = c;
    i = 0;
    while (i < len)
    {
        *ptr++ = *ptr2++;
        i++;
    }
    return(s);
}

// int main(void)
// {
//     char s[] = "Hello World";
//     char c[] = "Power";
//     memcpy(s, c, 5);
//     printf("%s", s);
// }

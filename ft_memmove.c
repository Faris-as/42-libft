/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabdul-s <fabdul-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 02:28:50 by fabdul-s          #+#    #+#             */
/*   Updated: 2025/11/11 03:44:17 by fabdul-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void *ft_memmove(void *s, const void *c, size_t len)
{
    unsigned char *ptr;
    const unsigned char *ptr2;
    size_t i;

    ptr = s;
    ptr2 = c;
    i = 0;
    if (ptr < ptr2)
    {
        while (i < len)
        {
            ptr[i] = ptr2[i];
            i++;
        }
    }
    else
    {
        while(len > 0)
        {
            ptr[len - 1] = ptr2[len - 1];
            len--;
        }
    }

    return(s);
}

// int main(void)
// {
//     char s[] = "Hello World";
//     char c[] = "Power";
//     memmove(s, c, 5);
//     printf("%s\n", s);
//     printf("%s", c);
// }

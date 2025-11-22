/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabdul-s <fabdul-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 21:58:42 by fabdul-s          #+#    #+#             */
/*   Updated: 2025/11/11 02:04:06 by fabdul-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void *ft_memset(void *c, int b, size_t len)
{
    size_t i;
    unsigned char *ptr;

    ptr = c;
    i = 0;
    while (i < len)
    {
        ptr[i] = (unsigned char)b;
        i++;
    }
    return(c);
}

// int main()
// {
//     char c[] = "memory is efficiency";
//     ft_memset(c, '-', 7);
//     printf("%s", c);
// }

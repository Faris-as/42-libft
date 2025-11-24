/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabdul-s <fabdul-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 03:44:49 by fabdul-s          #+#    #+#             */
/*   Updated: 2025/11/11 07:37:42 by fabdul-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t ft_strlcpy(char *d, char const *s, size_t l)
{
    size_t i;
    size_t length;

    i = 0;
    length = 0;
    while(s[length] != '\0')
    {
        length++;
    }
    if (l > 0)
    {
        while(i < l - 1 && s[i] != '\0')
        {
            d[i] = s[i];
            i++;
        }
        d[i] = '\0';
    }
    return length;
}

// int main()
// {
//     char s[] = "Hello World";
//     char c[] = "Power Rangers";

//     size_t m = ft_strlcpy(s, c, 4);
//     printf("%s", s);
//     printf("\n%zu", m);
// }

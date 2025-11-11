/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabdul-s <fabdul-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:54:02 by fabdul-s          #+#    #+#             */
/*   Updated: 2025/11/11 15:16:11 by fabdul-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int ft_toupper(int c)
{
    if(c >= 97 && c <= 122)
    {
        c -= 32;
    }
    return c;
}

// int main()
// {
//         int lowerChar = 97;
//         int upperChar = ft_toupper(lowerChar); // Convert 'h' to 'H'
//         printf("Lowercase: %d, Uppercase: %c\n", lowerChar, upperChar);
// }

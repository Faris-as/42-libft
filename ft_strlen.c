/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabdul-s <fabdul-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 21:46:07 by fabdul-s          #+#    #+#             */
/*   Updated: 2025/11/10 21:58:21 by fabdul-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strlen(char *s)
{
    int length;

    length = 0;
    while(s[length] != '\0')
    {
        length++;
    }
    return length;
}

// int main()
// {
//     char s[] = "farisii";
//     printf("%lu", strlen(s));
// }

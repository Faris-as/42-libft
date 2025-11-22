/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabdul-s <fabdul-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 14:00:55 by fabdul-s          #+#    #+#             */
/*   Updated: 2025/11/16 14:00:55 by fabdul-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strrchr(const char *s, int c)
{
    unsigned char m;
    int i;

    m = c;
    i = 0;
    while (s[i] != '\0')
        i++;
    if(m == '\0')
        return((char*) s + i);
    i--;
    while(i>=0)
    {
        if(s[i] == m)
            return((char*) s + i);
        i--;
    }
    return(0);
}

// int main()
// {
//     char s[]= "farias";
//     char *m = ft_strrchr(s, 'a');
//     printf("%s", m);
// }
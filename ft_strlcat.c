/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabdul-s <fabdul-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 07:39:48 by fabdul-s          #+#    #+#             */
/*   Updated: 2025/11/11 11:57:54 by fabdul-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *d, char const *s, size_t size)
{
	size_t i;
	size_t slength;
	size_t dlength;

	dlength = ft_strlen(d);
	slength = ft_strlen(s);
	i = dlength;
	if (size <= dlength)
		return size + slength;
	else
	{
		while(i < size - 1 && *s)
		{
			d[i] = *s++;
			i++;
		}
		d[i] = '\0';
	}
	return dlength + slength;
}

// int main()
// {
// 	char s[20] = "Hello World";
// 	char c[20] = "Power Rangers";

// 	size_t m = ft_strlcat(s, c, 20);
// 	printf("%s", s);
// 	printf("\n%zu", m);
// }

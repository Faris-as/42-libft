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

#include <stdio.h>
#include <string.h>

size_t ft_strlcat(char *d, char *s, size_t size)
{
	size_t i;
	char *dstr;
	size_t slength;
	size_t dlength;
	size_t chav;

	i = 0;
	dstr = d;
	dlength = 0;
	slength = 0;
	while(*d != '\0')
		*d++;
	dlength = d - dstr;
	while(s[slength])
		slength++;
	if (size <= dlength)
		return size + slength;
	else
	{
		while(dlength < size - 1 && *s)
		{
			*d++ = *s++;
			dlength++;
		}
		*d = '\0';
	}
	return dlength + slength;
}

int main()
{
	char s[20] = "Hello World";
	char c[20] = "Power Rangers";

	size_t m = ft_strlcat(s, c, 20);
	printf("%s", s);
	printf("\n%zu", m);
}

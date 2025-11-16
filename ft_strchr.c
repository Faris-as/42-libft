/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabdul-s <fabdul-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:16:48 by fabdul-s          #+#    #+#             */
/*   Updated: 2025/11/11 15:18:21 by fabdul-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strchr(const char *str, int word)
{
	unsigned char m;
	int i;

	m = word;
	i = 0;

	while(str[i] != 0)
	{
		if (str[i] == m)
			return ((char*) str + i); // casting
		i++;
	}
	if (m == 0)
		return ((char*) str + i);

	return (0); 
}

int main()
{
	char s[] = "faris";
	printf("%s", ft_strchr(s,'l'));
}
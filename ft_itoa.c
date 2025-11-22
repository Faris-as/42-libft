#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

static int  digitlen(long n)
{
	int i;

	i = 0;
	if(n < 0)
	{
		n *= -1;
		i++;
	}
	while(n > 0)
	{
		n = n / 10;
		i++;
	}
	return i;
}

char *ft_itoa(int n)
{
	long l;
	char *s;
	int i;

	l = n;
	
	i = digitlen(l);
	s = (char *)malloc(sizeof(char) *(i + 1));
	if (!s)
		return (NULL);
	s[i--] = '\0';
	if(n == 0)
		s[0] = '0';
	if(l < 0)
	{
		s[0] = '-';
		l *= -1;
	}
	while(l > 0)
	{
		s[i--] = l % 10 + '0';
		l = l / 10;
	}
	return s;
}

// int main()
// {
// 	   printf("ft_itoa(-123456789) = %s\n", ft_itoa(-123456789));
// 	   printf("ft_itoa(INT_MAX) = %s\n", ft_itoa(INT_MAX));
// }
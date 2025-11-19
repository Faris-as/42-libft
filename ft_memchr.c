
#include <string.h>
#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	const unsigned char *p;

	i = 0;
	p = s;
	while(i < n)
	{
		if(p[i] == (unsigned char)c)
			return ((void *)(p + i));
		i++;
	}
	return (0);
}

// int main()
// {
// 	char s[] = "faris";
// 	char data[] = { 'a', 'b', 'c', 'd', 'e' };
// 	char *result = memchr(data, 'd', 5);
// 	printf("%ld", result - data);
// }
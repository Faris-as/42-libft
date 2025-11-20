#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *sub;
    size_t i;
    size_t length;

    if (s == NULL)
        return (NULL);
    length = strlen(s);
    sub = (char *)malloc(sizeof(char) * (len + 1));
    if (!sub)
        return (NULL);
    if (start >= length)
    {
        *sub = '\0';
        return sub;
    }
    if (len > length - start)
        len = length - start;

    ft_memcpy(sub, &s[start], len);
    sub[len] = '\0';
    return sub;
}

// int main()
// {
//     char s[]="faris abdul sukkur";
//     char *q = ft_substr(s, 3, 2);
//     printf("%s", q);
// }
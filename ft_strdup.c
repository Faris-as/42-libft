
#include <stdlib.h>
#include "libft.h"

char *ft_strdup(const char *src)
{
    char *dest;
    size_t i;
    size_t length;

    length = ft_strlen(src);
    dest = (char *)malloc(sizeof(char) * (length + 1));  // 1 for the terminator
    if (dest == NULL)
        return (NULL);
    i = 0;
    while(src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

// int main()
// {
//     char *s = "Hello, world!";
//     char *copy = ft_strdup(s);

//     if (copy)
//     {
//         printf("%s\n", copy);
//         free(copy);
//     }
// }

// #include <stdio.h>
// #include <string.h>

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;

    if (!*little)
        return ((char *)big);

    i = 0;
    while (i < len && big[i])
    {
        j = 0;
        while (i + j < len && big[i + j] == little[j] && little[j])
            j++;
        if (!little[j])
            return ((char *)(big + i));
        i++;
    }
    return (NULL);
}

// int main()
// {
//     unsigned char a[] = {1, 2, 3, 4};
//     unsigned char b[] = {1, 2, 5, 4};
//     printf("%s",ft_strnstr("Hello World", "World", 10));
// }
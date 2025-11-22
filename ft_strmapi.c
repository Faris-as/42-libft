#include "libft.h"
#include <stdio.h>



char my_toupper(unsigned int i, char c)
{
    (void)i;
    if (c >= 'a' && c <= 'z')
        return c - 32;
    return c;
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t i;
    size_t len;
    char *new;
    
    i = 0;
    len = ft_strlen(s);
    new = (char *)malloc(sizeof(char) * (len + 1));
    if (!new)
        return NULL;
    while(s[i])
    {
        new[i] = f(i, s[i]);
        i++;
    }
    new[len] = '\0';
    return new;
}

// int main()
// {
//     char *result = ft_strmapi("faris", my_toupper);

//     if (result)
//     {
//         printf("Result: %s\n", result);
//         free(result);   // IMPORTANT: ft_strmapi returns malloc’d memory
//     }
//     else
//         printf("Allocation failed.\n");

//     return 0;
// }
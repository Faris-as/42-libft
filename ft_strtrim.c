#include "libft.h"

int same(char c, char const *set)
{
    while(*set)
    {
        if(c == *set)
            return 1;
        set++;
    }
    return 0;
}

char *ft_strtrim(char const *s1, char const *set)
{
    size_t length;
    size_t i;
    size_t strlen;
    char *new;
    
    i = 0;
    length = ft_strlen(s1);
    while(s1[i] && same(s1[i], set))
        i++;
    if(i > length)
        return ft_calloc(1,1);
    length --;
    while(length > i && same(s1[length], set))
        length--;
    strlen = length - i + 1;
    new = (char *)malloc(sizeof(char) * (strlen + 1));
    if(!new)
        return (NULL);
    ft_memcpy(new, &s1[i], strlen);
    new[strlen] = '\0';
    return (new);
}

// int main()
// {
//     printf("%s",ft_strtrim("cpppppython", "cpn"));
// }
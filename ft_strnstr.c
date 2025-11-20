
#include <stdio.h>
#include <string.h>

char *ft_strnstr(const char *big, const char *small, size_t n)
{
    size_t i;
    size_t j;

    i = 0;
    if(small[0] == '\0')
        return ((char *)big);
    while(big[i] && i <= n)
    {
        j = 0;
        while(big[i + j] == small[j] && i + j <= n && big[i+j] != '\0')
        {
            if(small[j + 1] == '\0')
            {
                return(char *)&big[i]; //return char* big + i;
            }
            j++;
        }
        i++;
    }
    return(0);
}

// int main()
// {
//     unsigned char a[] = {1, 2, 3, 4};
//     unsigned char b[] = {1, 2, 5, 4};
//     printf("%s",ft_strnstr("Hello World", "World", 10));
// }
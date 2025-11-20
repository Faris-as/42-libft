#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void *ft_calloc(size_t count, size_t size)
{
    char *p;
    
    if (count != 0 && size != 0 && (count * size) / size != count)
        return (NULL);

    p = malloc(count * size);
    if (p == NULL)
        return (NULL); 
    ft_bzero(p, (count * size));
    return p;
}

// int main()
// {
//     int *arr;
//     size_t n = 5;

//     arr = ft_calloc(n, sizeof(int));
//     if (!arr)
//         return 1;

//     for (size_t i = 0; i < n; i++)
//         printf("%d ", arr[i]); // prints: 0 0 0 0 0

//     free(arr);
//     return 0;
// }
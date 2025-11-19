
#include <stdio.h>
#include <string.h>

int ft_memcmp(const void* s1, const void* s2, size_t n)
{
    size_t i;
    const unsigned char *p1;
    const unsigned char *p2;
    
    i = 0;
    p1 = s1;
    p2 = s2;
    if (n == 0)
        return (0);
    while(i < n && p1[i] == p2[i])
        i++;
    if (i == n)
        return (0);
    else
        return((unsigned char)p1[i] - (unsigned char)p2[i]);
}

int main() {
    unsigned char a[] = {1, 2, 3, 4};
    unsigned char b[] = {1, 2, 5, 4};

    printf("real: %d\n", memcmp(a, b, 4));
    printf("mine: %d\n", ft_memcmp(a, b, 4));
}
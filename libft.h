#ifndef LIBFT
#define LIBFT

#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_strlen(char *s);
void *ft_memset(void *c, int b, size_t len);
void ft_bzero(void *c, size_t len);
void *ft_memcpy(void *s, const void *c, size_t len);
void *ft_memmove(void *s, const void *c, size_t len);
size_t ft_strlcpy(char *d, char *s, size_t l);
size_t ft_strlcat(char *d, char *s, size_t size);


#endif

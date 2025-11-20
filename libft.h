#ifndef LIBFT
#define LIBFT

#include <stdio.h>
#include <string.h>
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
int ft_toupper(int c);
int ft_tolower(int c);
char *ft_strchr(const char *str, int word);
char *ft_strrchr(const char *s, int c);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void* s1, const void* s2, size_t n);
char *ft_strnstr(const char *big, const char *small, size_t n);
int	ft_atoi(const char *nptr);
void *ft_calloc(size_t count, size_t size);


#endif

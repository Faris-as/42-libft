NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_tolower.c ft_toupper.c ft_isprint.c ft_isascii.c ft_isalnum.c \
		ft_isdigit.c ft_isalpha.c ft_atoi.c ft_strlen.c ft_strlcat.c \
		ft_strncmp.c ft_calloc.c ft_memcpy.c ft_strchr.c \
		ft_strrchr.c ft_strnstr.c ft_bzero.c ft_memchr.c ft_memcmp.c \
		ft_memset.c ft_memmove.c ft_strlcpy.c

OBJ = $(SRC:.c =.o)

all: $(NAME)

$(NAME): $(OBJ)
    ar rcs $(NAME) $(OBJ)

%.o: %.c
    $(CC) $(CFLAGS) -I include -c $< -o $@

clean:
    rm -f $(OBJ)

fclean: clean
    rm -f $(NAME)

re: fclean all

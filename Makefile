NAME = libft.a

HEAD = Libft.h
CC = cc
CFLAGS = -Wall -Werror -Wextra -lbsd
SRC = ft_atoi.c \
	ft_bzero.c \
	ft_strlen.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_memset.c \
	ft_strdup.c \
	ft_strlcpy.c\
       	ft_strlen.c \
	ft_strncmp.c\
       	ft_tolower.c\
       	ft_toupper.c\
       	ft_memcpy.c\
       	ft_memmove.c\
	ft_strchr.c\
	ft_strrchr.c\
	ft_memchr.c\
	ft_memcmp.c\
	ft_calloc.c\
	ft_itoa.c\
	ft_putstr_fd.c\
	ft_putchar_fd.c\
	ft_putendl_fd.c\
	ft_putnbr_fd.c

OBJ = $(SRC:.c=.o)
OPT = -rc
AR = ar

$(NAME): all

all: $(OBJ)
	$(AR) $(OPT) $(NAME) $^

%.o: %.c
	$(CC) -c $< -o $@
clean :
	rm -f $(OBJ)

fclean : clean
	rm  -f $(NAME)

re :



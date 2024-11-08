NAME = libft.a

SRC =	ft_memset.c ft_bzero.c ft_strlen.c ft_atoi.c ft_isdigit.c ft_isalpha.c\
ft_isprint.c ft_isascii.c ft_isalnum.c ft_memchr.c ft_memcpy.c\
ft_memcmp.c ft_memmove.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c\
ft_strncmp.c ft_tolower.c ft_strnstr.c ft_strrchr.c ft_calloc.c\
ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c ft_substr.c\
ft_strjoin.c ft_strtrim.c ft_strmapi.c ft_itoa.c ft_split.c ft_striteri.c\
ft_toupper.c

OBJ=	$(SRC:.c=.o)

CFLAGS = 	-Wall -Werror -Wextra

all:		$(NAME)

$(NAME):$(OBJ)
	gcc -c $(CFLAGS) $(SRC)
	ar rcs $(NAME) $(OBJ)

clean:
	@echo "Borrando archivos objeto..."
	rm -rf *.o
	@echo "Borrados"

fclean:	clean
	@echo "Borrando todo..."
	@rm -rf $(NAME)
	@echo "Todo limpio!"

re:	fclean all

.PHONY: all clean fclean bonus re

NAME = libft.a

SRCS = 	ft_strlen.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_atoi.c \

FLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${SRCS:.c=.o}
	ar -rc ${NAME} $<

%.o : %.c
	cc ${FLAGS} -c $< -o $@

clean:
	rm -f ${SRCS:.c=.o}

fclean: clean
	rm -f ${NAME}

re: fclean all
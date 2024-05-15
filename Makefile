NAME = libft.a

SRCS = 	ft_strlen.c \
		ft_strlcpy.c \
		ft_strlcat.c

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
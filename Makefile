NAME =		libft.a
SRC =		ft_atoi.c\
			ft_bzero.c\
			ft_calloc.c\
			ft_isalnum.c\
			ft_isalpha.c\
			ft_isascii.c\
			ft_isdigit.c\
			ft_isprint.c\
			ft_isspace.c\
			ft_itoa.c\
			ft_memccpy.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_memcpy.c\
			ft_memmove.c\
			ft_memset.c\
			ft_putchar_fd.c\
			ft_putchar.c\
			ft_putnbr.c\
			ft_putstr_fd.c\
			ft_putendl_fd.c\
			ft_putnbr_fd.c\
			ft_putstr.c\
			ft_split.c\
			ft_strcpy.c\
			ft_strdup.c\
			ft_strjoin.c\
			ft_strlcat.c\
			ft_strlcpy.c\
			ft_strlen.c\
			ft_strncmp.c\
			ft_tolower.c\
			ft_toupper.c\
			ft_lstnew.c\
			ft_lstsize.c\

INCLUDE =	libft.h
OBJS =		${SRC:.c=.o}
CC =		gcc -Wall -Wextra -Werror

%.o :		%.c
			${CC} ${CFLAGS} -I ${INCLUDE} -c $< -o $@

all :		${NAME}

${NAME} :	${OBJS}
			ar rc $@ ${OBJS}

clean :		
			rm -f ${OBJS}

fclean :	clean
			rm -f ${NAME}

re :		fclean all

.PHONY: all clean fclean re
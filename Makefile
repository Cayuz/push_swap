NAME	=	push_swap
CFLAGS	=	-Wall -Werror -Wextra -g -fsanitize=address
CC		=	gcc

INCLUDE = -Ilibft
INCLUDE = -Ift_printf

SRCS	=	push_swap.c \
			nodes.c

OBJS	=	${SRCS:.c=.o}

all :	ft_printf libft ${NAME}

${NAME}: ${OBJS}
	@ ${CC} $^ ${CFLAGS} ${INCLUDE} libft/libft.a ${INCLUDE} ft_printf/libftprintf.a -o ${NAME}
	@ echo "meka :)"

libft :
	@ make -C libft

ft_printf :
	@ make -C ft_printf

%.o: %.c
	@ ${CC} ${CFLAGS} ${INCLUDE} -c $< -o $@

clean : 
	@ make -C libft clean
	@ make -C ft_printf clean
	@ rm -rf ${OBJS}
	@ echo "cleaned"

fclean : clean
	@ make -C libft fclean
	@ make -C ft_printf fclean
	@ rm -f ${NAME}
	@ echo "fclean"

re : fclean all

.PHONY : all clean fclean re libft ft_printf
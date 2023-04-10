NAME		:=	push_swap
CC			:=	gcc
CFLAGS		:=	-Wall -Werror -Wextra -g -fsanitize=address
SRC_DIR		:=	src/
OBJ_DIR		:=	obj/
INCLUDE		:=	push_swap.h -Ilibft -Ift_printf

SRCS		:=	push_swap.c \
				nodes.c

OBJS		:=	$(addprefix ${OBJ_DIR}, $(SRCS:.c=.o))

#	==== COLORS! ====	#
BLACK		:=	\033[30m
RED			:=	\033[31m
GREEN		:=	\033[32m
YELLOW		:=	\033[33m
BLUE		:=	\033[34m
MAGENTA		:=	\033[35m
CYAN		:=	\033[36m
WHITE		:=	\033[37m
RESET		:=	\033[0m

#	==== COLORS! (but the bold kind) ====	#
BLACKB		:=	\033[1;30m
REDB		:=	\033[1;31m
GREENB		:=	\033[1;32m
YELLOWB		:=	\033[1;33m
BLUEB		:=	\033[1;34m
MAGENTAB	:=	\033[1;35m
CYANB		:=	\033[1;36m
WHITEB		:=	\033[1;37m

${NAME}: ${OBJS}
	@ ${CC} $^ ${CFLAGS} libft/libft.a ft_printf/libftprintf.a -o ${NAME}
	@ echo "${GREENB}Succesfully made: ${RESET}${NAME}!"

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@ mkdir -p $(OBJ_DIR)
	@ $(CC) $(CFLAGS) -I ./ -c -o $@ $<

all: ft_printf libft ${NAME} 

libft:
	@ make -C libft

ft_printf:
	@ make -C ft_printf

obj/%.o: %.c
	@${CC} ${CFLAGS} -c -o $@ $<

clean: 
	@ make -C libft clean
	@ make -C ft_printf clean
	@ rm -rf ${OBJS}
	@ echo "${YELLOWB}Cleaned: ${RESET}${NAME}, ft_printf and libft!"

fclean: clean
	@ make -C libft fclean
	@ make -C ft_printf fclean
	@ rm -f ${NAME}
	@ echo "${MAGENTAB}Fully cleaned: ${RESET}${NAME}, ft_printf and libft!"

re: fclean all

.PHONY: all clean fclean re libft ft_printf
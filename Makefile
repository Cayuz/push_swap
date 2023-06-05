NAME		:=	push_swap
CC			:=	gcc
OBJ_DIR		:=	obj/
INCLUDE		:=	-I incl/
CFLAGS		:=	-Wall -Werror -Wextra $(INCLUDE)
SRC_DIR		:=	src/

SRCS		:=	input_check.c \
				nodes.c \
				push_swap.c \
				push.c \
				rev_rotate.c \
				rotate.c \
				small_sort.c \
				sort.c \
				swap.c \
				utils.c \

LIBS 		:= incl/libft/libft.a \
			   incl/ft_printf/ft_printf.a \


SRC			:=	$(addprefix $(SRC_DIR), $(SRCS))

OBJS		:=	$(addprefix ${OBJ_DIR}, $(SRCS:.c=.o))

#	====	COLORS!		====	#
BLACK		:=	\033[30m
RED			:=	\033[31m
GREEN		:=	\033[32m
YELLOW		:=	\033[33m
BLUE		:=	\033[34m
MAGENTA		:=	\033[35m
CYAN		:=	\033[36m
WHITE		:=	\033[37m
RESET		:=	\033[0m

#	====	COLORS! (but the bold kind)		====	#
BLACKB		:=	\033[1;30m
REDB		:=	\033[1;31m
GREENB		:=	\033[1;32m
YELLOWB		:=	\033[1;33m
BLUEB		:=	\033[1;34m
MAGENTAB	:=	\033[1;35m
CYANB		:=	\033[1;36m
WHITEB		:=	\033[1;37m

all: ${NAME} 

incl/libft/libft.a:
	@ make -C incl/libft

incl/ft_printf/ft_printf.a:
	@ make -C incl/ft_printf

${NAME}: ${OBJS} ${LIBS}
	@ ${CC} $^ ${CFLAGS} incl/libft/libft.a incl/ft_printf/ft_printf.a -o ${NAME}
	@ echo "${GREENB}Compiled ${RESET}${NAME}!"

obj/%.o: %.c
	@ ${CC} ${CFLAGS} -c -o $@ $<
	
$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@ mkdir -p $(OBJ_DIR)
	@ $(CC) $(CFLAGS) -I ./ -c -o $@ $<

clean: 
	@ echo "${YELLOWB}Removing...${RESET}"
	@ make -C incl/libft clean
	@ make -C incl/ft_printf clean
	@ rm -rf ${OBJ_DIR}
	@ echo "${YELLOWB}Removed programs!${RESET}"


fclean: clean
	@ echo "${MAGENTAB}Cleaning... ${RESET}"
	@ make -C incl/libft fclean
	@ make -C incl/ft_printf fclean
	@ rm -f ${NAME}
	@ echo "${MAGENTAB}Cleaned: ${RESET}${NAME}, ft_printf, and libft!"

re: fclean all

.PHONY: all clean fclean re
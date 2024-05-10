# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: cavan-vl <cavan-vl@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2024/04/18 20:42:56 by cavan-vl      #+#    #+#                  #
#    Updated: 2024/05/10 18:46:36 by cavan-vl      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME			:= push_swap

LIBFT			:= ./lib42

CFLAGS			:= -Wall -Werror -Wextra -g -fsanitize=address
CC				:= cc -Ofast
LIBS			:= $(LIBFT)/libft.a 
HEADER			:= -I ./includes -I $(LIBFT)/inc

SRCS			:= push_swap.c sort.c push.c swap.c rotate.c reverse_rotate.c \
					utils.c list_utils.c input_check.c

SRC_DIR			:= src
SRC				:= $(addprefix $(SRC_DIR)/, $(SRCS))

OBJ_DIR			:= obj
OBJ				:= $(addprefix $(OBJ_DIR)/, $(notdir $(SRC:.c=.o)))

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

all: libft $(NAME) 

libft:
	@ make -C $(LIBFT)

$(NAME): $(OBJ)
	@ $(CC) $(OBJ) $(CFLAGS) $(HEADER) $(LIBS) -o $(NAME)
	@ printf "$(YELLOW)Swap $(WHITE)the $(MAGENTA)Push$(RESET)!\n"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@ mkdir -p $(OBJ_DIR)
	@ $(CC) $(CFLAGS) $(HEADER) -c $< -o $@

clean:
	@ rm -rf $(OBJ_DIR)
	@ rm -rf lib42/$(OBJ_DIR)/
	@ echo "Object files deleted!\n"

fclean: clean
	@ rm -f $(NAME)
	@ rm -rf lib42/libft.a
	@ echo "Program(s) deleted!\n"

re: fclean all

.PHONY: all clean fclean re libmlx
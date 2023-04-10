INCLUDE = ft_printf.h

NAME	:= libftprintf.a

SRCS	:= \
ft_printf.c \
ft_printf_utils.c \

OBJS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS) $(INCLUDE)
	@ar rcs $(NAME) $?

%.o: %.c
	@$(CC) $(CFLAGS) -c -o $@ $<
clean:
	@rm -rf $(OBJS)
fclean: clean
	@rm -f $(NAME)
re: fclean all
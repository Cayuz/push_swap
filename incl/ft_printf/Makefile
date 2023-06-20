NAME	:=	libprintf.a
INCLUDE	:=	ft_printf.h
CC		:=	gcc
CFLAGS	:=	-Wall -Werror -Wextra

SRCS	:=	\
			ft_printf.c \
			ft_printf_utils.c \

OBJS = $(SRCS:.c=.o)


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

.PHONY: clean re fclean all printf
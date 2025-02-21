CFLAGSS = -Wall -Wextra -Werror
SRCS = main.c set_struct.c push.c swap.c rotate.c reverse_rotate.c control.c radix.c buble.c little_sort.c ft_atol.c
OBJS = $(SRCS:.c=.o)
NAME = push_swap
CC = gcc
LIB = ./libft/libft.a
S = 0
E = 100

all: $(NAME)

$(NAME) : $(LIB) $(OBJS)
	$(CC) $(OBJS) -g $(LIB) -o $(NAME)

$(LIB) :
	@make -C ./libft

.c.o:
	$(CC) $(CFLAGSS) -c $< -o $@ -g

clean:
	rm -rf $(OBJS) $(NAME)

fclean: clean
	make fclean -sC ./libft

re: clean all

.PHONY: clean re fclean all vis

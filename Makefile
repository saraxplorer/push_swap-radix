# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rshaheen <rshaheen@student.42.fr>            +#+                      #
#                                                    +#+                       #
#    Created: 2024/01/31 15:49:20 by rshaheen      #+#    #+#                  #
#    Updated: 2024/03/20 12:05:23 by rshaheen      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc 
RM = rm -f
FLAGS = -Wall -Wextra -Werror -g
LIBFTDIR = libft/
OBJ_DIR = obj
INCLUDE = -L ./libft -lft
SRC = \
	push_swap.c \
	check.c \
	print_error.c \
	free.c \
	make_llist.c \
	make_llist_helper.c \
	ft_sort.c \
	sort_helper.c \
	sort_continue.c \
	operations_a.c \
	operations_b.c \
	operations_c.c \
	list_utils.c \
	sort_utils.c

OBJ = $(SRC:%.c=$(OBJ_DIR)/%.o)


all: $(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ_DIR) $(OBJ)
		make -C $(LIBFTDIR)
		$(CC) $(FLAGS) $(OBJ) -o $(NAME) $(INCLUDE)

clean:
	rm -rf $(OBJ_DIR)
	@cd $(LIBFTDIR) && $(MAKE) clean

fclean: clean
		$(RM) $(NAME)
		@cd $(LIBFTDIR) && $(MAKE) fclean

re: clean all

.PHONY: all clean fclean re




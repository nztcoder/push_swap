# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: oznachki <oznachki@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2026/02/17 22:56:59 by oznachki      #+#    #+#                  #
#    Updated: 2026/02/22 15:29:47 by oznachki      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap
CC			= cc
CFLAGS		= -Wall -Wextra -Werror
INCLUDES	= -I includes

SRC_DIR		= src
OBJ_DIR		= obj
INC_DIR		= includes

MAIN_SRC	= src/main/push_swap.c \
			  src/main/parsing.c

OPS_SRC		= src/operations/swap.c \
			  src/operations/push.c \
			  src/operations/rotate.c \
			  src/operations/reverse_rotate.c

SORT_SRC	= src/sorting/sort_three.c \
			  src/sorting/sort_five.c \
			  src/sorting/radix_sort.c \
			  src/sorting/index_radix.c

UTILS_SRC	= src/utils/is_valid.c \
			  src/utils/check_dublicates.c \
			  src/utils/ft_atol.c \
			  src/utils/append_node.c \
			  src/utils/free_list.c \
			  src/utils/print_error.c \
			  src/utils/is_sorted.c \
			  src/utils/get_max_bits.c

SRCS		= $(MAIN_SRC) $(OPS_SRC) $(SORT_SRC) $(UTILS_SRC)

OBJS		= $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

HEADER		= $(INC_DIR)/push_swap.h

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(HEADER)
		@mkdir -p $(dir $@)
		$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@
		
clean:
	rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
	
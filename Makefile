# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/01 15:27:22 by cstoia            #+#    #+#              #
#    Updated: 2024/05/06 16:56:19 by cstoia           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of the project
NAME = push_swap

CC = cc

# Flags
CFLAGS = -Wall -Wextra -Werror

# Directories
SRC_DIR = source
OBJ_DIR = objects
LIBFT_DIR = libft
HEADER = $(SRC_DIR)/push_swap.h

SOURCES =	\
			main.c \
			list_functions.c \
			swap.c \
			push.c \
			rotate.c \
			reverse.c \
			input_checks.c \
			errors.c \
			sort_three.c

LIBFT = $(LIBFT_DIR)/libft.a
OBJECTS = $(SOURCES:%.c=$(OBJ_DIR)/%.o)

# Headers
HEADERS := -I $(SRC_DIR) -I $(LIBFT_DIR)

all: $(NAME)
	@echo "$(NAME) built successfully!"

# Build the project using libft library
$(NAME):  $(OBJECTS) $(LIBFT)
	@$(CC) $(CFLAGS) $(OBJECTS) -o $@ $(LIBFT)

# Compile source files into object files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) $(HEADERS) -c $< -o $@

# Compile libft
$(LIBFT):
	@make -C $(LIBFT_DIR)

# Create a directory for objects
$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

# Clean the project
clean:
	@rm -rf $(OBJ_DIR)
	@make -C $(LIBFT_DIR) clean

# Clean project and object files
fclean: clean
	@rm -rf $(NAME)
	@make -C $(LIBFT_DIR) fclean

# Clean and rebuild project rule
re: fclean all

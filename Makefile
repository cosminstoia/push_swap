# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/01 15:27:22 by cstoia            #+#    #+#              #
#    Updated: 2024/05/03 15:07:53 by cstoia           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of the project
NAME = push_swap

# Flags
CFLAGS = -Wall -Wextra -Werror

# Directories
SRC_DIR = source
OBJ_DIR = objects
LIBFT_DIR = libft

# Libraries and source files (Do not use "*.c", because of the norm!!)
LIBFT = $(LIBFT_DIR)/libft.a
SOURCES = 	$(SOURCE)/main.c \
			$(SOURCE)/list_function.c \
			$(SOURCE)/swap.c \
			$(SOURCE)/push.c \
			$(SOURCE)/rotate.c
OBJECTS = $(SOURCES:%.c=$(OBJ_DIR)/%.o)
HEADER = $(SOURCE)/pus_swap.h

# Headers
HEADERS := -I $(HEADER) -I $(LIBFT_DIR)

all: $(NAME)
	@echo "$(NAME) built successfully!"

# Build the project using MLX and libft libraries
$(NAME): $(OBJECTS) $(LIBFT)
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

.PHONY: all clean fclean re mlx

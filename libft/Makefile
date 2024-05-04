# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/03 21:00:23 by cstoia            #+#    #+#              #
#    Updated: 2024/05/05 00:33:12 by cstoia           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FT_PRINTF_DIR = ft_printf
LIBFT_DIR = libft
CC = CC
CFLAGS = -Wall -Wextra -Werror
INCLUDES = ./libft.h

FT_PRINTF = \
				$(FT_PRINTF_DIR)/ft_printf.c \
				$(FT_PRINTF_DIR)/ft_put_unsigned_nbr.c \
				$(FT_PRINTF_DIR)/ft_putchar.c \
				$(FT_PRINTF_DIR)/ft_putnbr.c \
				$(FT_PRINTF_DIR)/ft_putp.c \
				$(FT_PRINTF_DIR)/ft_putstr.c \
				$(FT_PRINTF_DIR)/ft_putx.c \
				$(FT_PRINTF_DIR)/ft_putxxx.c

CFILES = \
		./ft_atoi.c \
		./ft_isdigit.c \
		./ft_lstadd_back.c \
		./ft_lstadd_front.c \
		./ft_lstclear.c \
		./ft_lstlast.c \
		./ft_lstnew.c \
		./ft_split.c \
		./ft_strlen.c \
		./ft_substr.c \
		./ft_strdup.c 

OBJECTS = \
		$(CFILES:%.c=%.o) \
		$(FT_PRINTF:$(FT_PRINTF_DIR)/%.c=$(FT_PRINTF_DIR)/%.o) \

all: $(NAME)

$(NAME): $(OBJECTS) $(INCLUDES)
		ar rcs $(NAME) $(OBJECTS)

%.o: %.c
		$(CC) $(CFLAGS) -c -o $@ $<

clean:
		rm -rf $(OBJECTS) $(OBJECTS_BONUS)

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY : all clean fclean re bonus

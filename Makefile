# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: icarboni <icarboni@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/04 15:15:10 by icarboni          #+#    #+#              #
#    Updated: 2022/10/06 10:33:57 by icarboni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
FLAG = -Wall -Wextra -Werror -I. -c
SRC = ft_printf.c ft_printf_utils.c ft_putnbr.c ft_hexadecimal.c ft_uputnbr.c

OBJ = ${SRC:.c=.o}

all: $(NAME)

$(NAME): $(OBJ)
	@gcc $(FLAG) $(SRC)
	@ar rc $(NAME) $(OBJ)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
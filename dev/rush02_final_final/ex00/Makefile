# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jborner <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/02 18:58:53 by jborner           #+#    #+#              #
#    Updated: 2023/04/02 19:01:12 by jborner          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02
SRC = *.c
all: $(NAME)
$(NAME):
	cc -Wall -Wextra -Werror -o $(NAME) $(SRC)
clean:
	find . -name *.o* -delete
fclean: clean
	find . -name $(NAME) -delete

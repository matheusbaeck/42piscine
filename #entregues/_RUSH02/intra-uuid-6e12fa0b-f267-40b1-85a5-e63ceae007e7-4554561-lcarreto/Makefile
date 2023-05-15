# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/20 15:12:20 by mamagalh@st       #+#    #+#              #
#    Updated: 2022/11/20 15:12:24 by mamagalh@st      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = rush-02

SRC = fx.c

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werrar $(SRC) -o $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

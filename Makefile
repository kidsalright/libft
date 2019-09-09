# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yberries <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/09 17:04:49 by yberries          #+#    #+#              #
#    Updated: 2019/09/09 18:54:38 by yberries         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

INCLUDES = /

SRC =

OBJ =

all: $(NAME)

$(NAME):
		gcc $(FLAGS) -c $(SRC) -I $(INCLUDES)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

clean:
		rm -rf $(OBJ)

fclean: clean
		rm_rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

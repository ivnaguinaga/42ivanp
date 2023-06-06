# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jandre-o <jandre-o@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/18 19:45:58 by jandre-o          #+#    #+#              #
#    Updated: 2023/04/18 20:25:06 by jandre-o         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRC = *.c

FLAGS = -Wall -Wextra -Werror

$(NAME):
	cc $(FLAGS) $(SRC) -o $(NAME)

norm: 
	norminette -R CheckForbiddenSourceHeader

fclean: clean
	/bin/rm -f $(NAME)

re: fclean $(NAME)

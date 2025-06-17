# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: htharrau <htharrau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/03 15:34:58 by htharrau          #+#    #+#              #
#    Updated: 2025/01/04 14:43:15 by htharrau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all: megaphone

megaphone: megaphone.o
	g++ -Wall -Wextra -Werror megaphone.o -o megaphone

megaphone.o: megaphone.cpp
	g++ -Wall -Wextra -Werror -c megaphone.cpp -o megaphone.o

clean:
	rm -f megaphone.o

fclean: clean
	rm -f megaphone

re: fclean all

.PHONY: all clean fclean re 

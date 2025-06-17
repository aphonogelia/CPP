# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: htharrau <htharrau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/12 14:14:05 by htharrau          #+#    #+#              #
#    Updated: 2025/04/24 19:42:08 by htharrau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = zombie00

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror 

SRCS = Zombie.cpp newZombie.cpp main.cpp randomChump.cpp 
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp Zombie.hpp 
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) 

re: fclean all

98: CXXFLAGS += -std=c++98
98: re

.PHONY: all clean fclean re

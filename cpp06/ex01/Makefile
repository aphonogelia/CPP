# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: htharrau <htharrau@student.42berlin.de>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/20 12:40:32 by htharrau          #+#    #+#              #
#    Updated: 2025/06/06 20:43:40 by htharrau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -MMD : génère un fichier .d pour chaque .o contenant les dépendances de ce fic
# -MP : ajoute une règle "fictive" pour chaque dépendance, ce qui évite des 
# 	    erreurs si tu supprimes un header.
# -include $(DEPS) : inclut tous les fichiers .d si ils existent, ce qui permet à 
# 	                 make de savoir quand recompiler.
# Si tu modifies un header, seuls les fichiers concernés seront recompilés.

NAME = serialize

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -MMD -MP

SRCS = main.cpp Serializer.cpp
OBJS = $(SRCS:.cpp=.o)
DEPS = $(OBJS:.o=.d)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME) 

-include $(DEPS)

%.o: %.cpp 
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(DEPS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
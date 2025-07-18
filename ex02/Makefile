# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/15 13:21:35 by rmakoni           #+#    #+#              #
#    Updated: 2025/07/18 10:28:42 by rmakoni          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = animal

SRC = 	main.cpp \
	Cat.cpp \
	Dog.cpp \
	Animal.cpp \
	Brain.cpp \
	WrongCat.cpp \
	WrongAnimal.cpp
        		
OBJ = $(SRC:.cpp=.o)

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror 

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX)	$(CXXFLAGS)	$(OBJ)	-o	$(NAME)

%.o: %.cpp
	$(CXX)	$(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

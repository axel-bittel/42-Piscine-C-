# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abittel <abittel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/18 10:24:03 by abittel           #+#    #+#              #
#    Updated: 2022/03/06 00:17:25 by abittel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	Contact.cpp  ex01.cpp  PhoneBook.cpp
OSRCS	=	${SRCS:.cpp=.o}
NAME	=	PhoneBook

all : ${NAME}

%.o: %.cpp 
	g++ -Wall -Werror -Wextra -std=c++98 -c $< -o ${<:.cpp=.o}
${NAME} :	${OSRCS}
	g++ -Wall -Werror -Wextra -std=c++98 ${OSRCS} -o ${NAME}
clean :
	rm -f ${OSRCS} ${OBONUS}
fclean : clean
	rm -f ${NAME}
re : fclean all

.PHONY: all clean fclean re

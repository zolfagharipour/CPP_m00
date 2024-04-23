# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mzolfagh <mzolfagh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/22 12:06:03 by mzolfagh          #+#    #+#              #
#    Updated: 2024/04/22 12:10:25 by mzolfagh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = megaphone

SRCS =  megaphone.cpp

OBJS = ${SRCS:.c=.o}

CC = g++
CFLAGS = -Wall -Wextra -Werror -g -std=c++98
RM	=	rm -rf

all: ${NAME}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} -o ${NAME} $^

bonus: ${BONUS_OBJS}
	${CC} ${CFLAGS} -o ${NAME} $^

clean: 
	${RM} ${OBJS} ${BONUS_OBJS}


fclean: clean
	${RM} ${NAME} ${CHECK}

re: fclean all

.PHONY: all bonus clean fclean re
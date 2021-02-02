# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fadelia <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/02 17:38:15 by fadelia           #+#    #+#              #
#    Updated: 2021/02/02 18:04:52 by fadelia          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = cat.c ft_putstr.c ft_strlen.c

NAME = ft_cat

OBJS = ${SRCS:.c=.o}

RM = rm -f

.c.o:
		gcc -Wall -Wextra -Werror -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
		gcc -o ${NAME} ${OBJS}

all: ${NAME}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${OBJS}

.PHONY: all clean fclean

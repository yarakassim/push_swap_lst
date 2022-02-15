# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ykassim- <ykassim-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/02 11:00:05 by ykassim-          #+#    #+#              #
#    Updated: 2022/02/04 12:26:25 by ykassim-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

FILES 	=	main.c \
			parse.c \
			push_swap.c \
			algo.c \
			operators.c
SRCS	=	$(addprefix srcs/, $(FILES))
OBJS	=	$(SRCS:.c=.o)

PATH_SRCS	=	./srcs/
PATH_OBJS	=	./objs/
PATH_LIBFT		= ./libft/
PATH_INC			= ./includes/

CC             =     gcc
CFLAGS        =     -Wall -Wextra -Werror


RM            =     rm -f

all:	$(NAME)

$(PATH_OBJS)%.o:$(PATH_SRCS)%.c
	${CC} ${CFLAGS} -I $(PATH_INC) -o $@ -c $<

$(NAME): $(OBJS)
	make -C $(PATH_LIBFT)
	${CC} $(CFLAGS) $(OBJS) -o $(NAME) $(FLAGS) libft/libft.a

clean:
	${RM} ${OBJS}
	make -C $(PATH_LIBFT) clean

fclean:	clean
	${RM} ${NAME}
	make -C $(PATH_LIBFT) fclean

re:	fclean all
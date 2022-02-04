# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/27 12:09:43 by ykassim-          #+#    #+#              #
#    Updated: 2021/06/08 10:22:57 by ykassim-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -rf

SRC = ft_isalpha.c \
	  ft_memchr.c \
	  ft_strchr.c \
	  ft_strncmp.c \
	  ft_atoi.c \
	  ft_isascii.c \
	  ft_memcmp.c \
	  ft_strdup.c \
	  ft_strnstr.c \
	  ft_bzero.c \
	  ft_isdigit.c \
	  ft_memcpy.c \
	  ft_strlcat.c \
	  ft_strrchr.c \
	  ft_calloc.c \
	  ft_isprint.c \
	  ft_memmove.c \
	  ft_strlcpy.c \
	  ft_tolower.c \
	  ft_isalnum.c \
	  ft_memccpy.c \
	  ft_memset.c \
	  ft_strlen.c \
	  ft_toupper.c \
	  ft_substr.c \
	  ft_strjoin.c \
	  ft_itoa.c \
	  ft_strtrim.c \
	  ft_split.c \
	  ft_strmapi.c \
	  ft_putchar_fd.c \
	  ft_putstr_fd.c \
	  ft_putendl_fd.c \
	  ft_putnbr_fd.c
	  
BONUS = ft_lstnew.c \
	  	ft_lstadd_front.c \
	  	ft_lstsize.c \
	  	ft_lstlast.c \
	  	ft_lstadd_back.c \
	  	ft_lstdelone.c \
	  	ft_lstclear.c \
	  	ft_lstiter.c

OBJ = $(SRC:.c=.o)

OBJ_BONUS = $(BONUS:.c=.o)

all : $(NAME)

$(NAME): $(OBJ)
	$(AR) $@ $^

bonus : $(OBJ) $(OBJ_BONUS)
	$(AR) $(NAME) $^
	@ranlib $(NAME)

.c.o: $(SRC)
	$(CC) $(CFLAGS) -c -o $@ $<

clean :
	$(RM) $(OBJ) $(OBJ_BONUS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

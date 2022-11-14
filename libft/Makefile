# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmoreira <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/12 11:46:49 by nmoreira          #+#    #+#              #
#    Updated: 2022/11/12 11:47:28 by nmoreira         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES =   	 ft_atoi.c ft_isalpha.c ft_isprint.c ft_memchr.c ft_memmove.c \
		 ft_putendl_fd.c ft_strchr.c ft_strlcat.c ft_strncmp.c ft_strtrim.c \
		 ft_bzero.c ft_isascii.c ft_itoa.c ft_memcmp.c ft_memset.c \
		 ft_putnbr_fd.c ft_strdup.c ft_strlen.c ft_strnstr.c ft_tolower.c \
		 ft_isalnum.c ft_isdigit.c ft_memcpy.c ft_putchar_fd.c \
		 ft_putstr_fd.c ft_strjoin.c ft_strmapi.c ft_strrchr.c ft_toupper.c \
		 ft_substr.c ft_calloc.c ft_strlcpy.c ft_split.c ft_striteri.c

BFILES = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
	 ft_lstiter.c ft_lstlast.c   ft_lstmap.c ft_lstnew.c ft_lstsize.c


OBJS = ${FILES:.c=.o}

OBJS_B = ${BFILES:.c=.o}

HEADER = 

CC = cc

CFLAGS = -Wall -Wextra -Werror -I.

AR = ar -rc

RM = rm -rf

LIB = ranlib

all: ${NAME}

${NAME}:${OBJS}
	${AR} $@ $^
	${LIB} $@

%.o:%.c 
	@echo "o to c"
	${CC} ${CFLAGS} -c -o $@ $<

bonus:$ ${OBJS} ${OBJS_B} 
	${AR} ${NAME} $^
	${LIB} ${NAME}

clean:
	${RM} ${OBJS} ${OBJS_B}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re bonus


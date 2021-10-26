# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: baaegon <baaegon@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/07 10:26:45 by baaegon           #+#    #+#              #
#    Updated: 2021/10/26 11:33:14 by baaegon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

LIST = ft_isalnum.c		ft_isascii.c	ft_isprint.c\
	   ft_strlen.c		ft_isalpha.c	ft_isdigit.c\
	   ft_memset.c		ft_bzero.c		ft_memcpy.c\
	   ft_memmove.c		ft_strlcpy.c	ft_strlcat.c\
	   ft_toupper.c		ft_tolower.c	ft_atoi.c\
	   ft_strchr.c		ft_strrchr.c	ft_strncmp.c\
	   ft_memchr.c		ft_memcmp.c		ft_strnstr.c\
	   ft_calloc.c		ft_strdup.c		ft_putchar_fd.c\
	   ft_putstr_fd.c	ft_putendl_fd.c	ft_putnbr_fd.c\
	   ft_substr.c		ft_strjoin.c	ft_strtrim.c\
	   ft_itoa.c		ft_strmapi.c	ft_striteri.c\
	   ft_split.c\

OBJ = $(patsubst %.c,%.o,$(LIST))

FLAGS = -Wall -Wextra -Werror

HEADER = libft.h

GCC = CC

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $?

%.o : %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re

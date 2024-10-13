# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: farges <farges@student.42barcelona.co      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/13 17:59:12 by farges            #+#    #+#              #
#    Updated: 2024/10/13 17:59:48 by farges           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a
SRC = ft_isascii.c ft_memcpy.c ft_putstr_fd.c ft_strlcat.c ft_strrchr.c ft_atoi.c ft_isdigit.c ft_memmove.c ft_strlcpy.c ft_strtrim.c ft_bzero.c ft_isprint.c ft_memset.c ft_strchr.c \
ft_strlen.c ft_calloc.c ft_putchar_fd.c ft_strdup.c ft_strmapi.c ft_tolower.c ft_substr.c\
ft_isalnum.c ft_memchr.c ft_putendl_fd.c ft_striteri.c ft_strncmp.c ft_toupper.c ft_isalpha.c \
ft_memcmp.c ft_putnbr_fd.c   ft_strjoin.c ft_strnstr.c ft_split.c ft_itoa.c
OBJS = $(SRC:.c=.o)
HEADER = libft.h
CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f
AR = ar rsc

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c $(HEADER) Makefile
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	
re: fclean all

.PHONY : all clean fclean re

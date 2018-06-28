# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nben-yaa <nben-yaa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/25 16:16:45 by nben-yaa          #+#    #+#              #
#    Updated: 2018/06/28 01:48:13 by nben-yaa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS_DIR	=	./srcs
SRCS		=	$(SRCS_DIR)/ft_memset.c \
				$(SRCS_DIR)/ft_bzero.c \
				$(SRCS_DIR)/ft_memcpy.c \
				$(SRCS_DIR)/ft_memccpy.c \
				$(SRCS_DIR)/ft_memmove.c \
				$(SRCS_DIR)/ft_memchr.c \
				$(SRCS_DIR)/ft_memcmp.c \
				$(SRCS_DIR)/ft_strlen.c \
				$(SRCS_DIR)/ft_strdup.c \
				$(SRCS_DIR)/ft_strcpy.c \
				$(SRCS_DIR)/ft_strcat.c \
				$(SRCS_DIR)/ft_strncat.c \
				$(SRCS_DIR)/ft_strlcat.c \
				$(SRCS_DIR)/ft_strchr.c \
				$(SRCS_DIR)/ft_strrchr.c \
				$(SRCS_DIR)/ft_strstr.c \
				$(SRCS_DIR)/ft_strnstr.c \
				$(SRCS_DIR)/ft_strcmp.c \
				$(SRCS_DIR)/ft_strncmp.c \
				$(SRCS_DIR)/ft_atoi.c \
				$(SRCS_DIR)/ft_isalpha.c \
				$(SRCS_DIR)/ft_isdigit.c \
				$(SRCS_DIR)/ft_isalnum.c \
				$(SRCS_DIR)/ft_isascii.c \
				$(SRCS_DIR)/ft_isprint.c \
				$(SRCS_DIR)/ft_toupper.c \
				$(SRCS_DIR)/ft_tolower.c \
				$(SRCS_DIR)/ft_memalloc.c \
				$(SRCS_DIR)/ft_memdel.c \
				$(SRCS_DIR)/ft_strnew.c \
				$(SRCS_DIR)/ft_strdel.c \
				$(SRCS_DIR)/ft_strclr.c \
				$(SRCS_DIR)/ft_striter.c \
				$(SRCS_DIR)/ft_striteri.c \
				$(SRCS_DIR)/ft_strmap.c \
				$(SRCS_DIR)/ft_strmapi.c \
				$(SRCS_DIR)/ft_strequ.c \
				$(SRCS_DIR)/ft_strnequ.c \
				$(SRCS_DIR)/ft_strsub.c \
				$(SRCS_DIR)/ft_strjoin.c \
				$(SRCS_DIR)/ft_strtrim.c \
				$(SRCS_DIR)/ft_strsplit.c \
				$(SRCS_DIR)/ft_itoa.c \
				$(SRCS_DIR)/ft_putchar.c \
				$(SRCS_DIR)/ft_putstr.c \
				$(SRCS_DIR)/ft_putendl.c \
				$(SRCS_DIR)/ft_putnbr.c \
				$(SRCS_DIR)/ft_putchar_fd.c \
				$(SRCS_DIR)/ft_putstr_fd.c \
				$(SRCS_DIR)/ft_putendl_fd.c \
				$(SRCS_DIR)/ft_putnbr_fd.c \
				$(SRCS_DIR)/ft_strncpy.c

CFLAGS		=	-W -Wall -Werror -Wextra -I./includes

OBJ			=	$(SRCS:.c=.o)

NAME		=	libft.a

all:		$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)
clean:
		rm -rf $(OBJ)

fclean:		clean
		rm -rf $(NAME)

re:		fclean all

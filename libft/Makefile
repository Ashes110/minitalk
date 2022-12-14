# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atito <atito@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/06 13:29:53 by marvin            #+#    #+#              #
#    Updated: 2022/10/22 14:47:28 by atito            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror
RM			=	rm -rf
AR			=	ar rcs
NAME		=	libft.a

SRCS_LST	=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c\
				ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c\
				ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c\
				ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c\
				ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c\
				ft_atoi.c ft_calloc.c ft_strdup.c\
				ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c\
				ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c\
				ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUS_LST	=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
				ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c\
				ft_lstmap.c

SRCS_OBJS	=	$(SRCS_LST:.c=.o)
BONUS_OBJS	=	$(BONUS_LST:.c=.o)

$(NAME): $(SRCS_OBJS)
	$(AR) $(NAME) $(SRCS_OBJS)

all:	$(NAME)

clean:
	$(RM) $(SRCS_OBJS) $(BONUS_OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean $(NAME)

bonus:	$(BONUS_OBJS)
	$(AR) $(NAME) $(BONUS_OBJS)

.PHONY:	all clean fclean re bonus

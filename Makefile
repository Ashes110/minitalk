# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atito <atito@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/11 16:32:13 by atito             #+#    #+#              #
#    Updated: 2022/12/14 16:27:52 by atito            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror

all:	libft client server

libft:
	make -C libft

client:	client.c
	$(CC) $(CFLAGS) -o client client.c libft/libft.a

server:	server.c
	$(CC) $(CFLAGS) -o server server.c libft/libft.a

clean:
	rm -rf $(OBJS)
	make -C libft clean

fclean:	clean
	rm -rf server client
	make -C libft fclean

re:		fclean all

.PHONY:	all clean fclean re libft client server
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: taegon-i <taegon-i@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/23 20:27:20 by taegon-i          #+#    #+#              #
#    Updated: 2020/02/19 11:27:50 by taegon-i         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = libft.a

NAME = push_swap

SRCS = ./libft/*.c

SRCS2 = ./srcs/*.c

SRO = ./*.o

HEADER_LIB = ./libft/

HEADER_FILL = ./includes/

COMM = -c -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
				@gcc $(COMM) $(SRCS) -I$(HEADER_LIB)
				@ar rc $(LIB) $(SRO)
				@ranlib $(LIB)
				@rm -f $(SRO)
				@gcc $(COMM) $(SRCS2) -I$(HEADER_FILL)
				@gcc $(SRO) $(LIB) -o $(NAME)
clean:
				@rm -f $(SRO)
fclean: clean
				@rm -f $(LIB)
				@rm -f $(NAME)
re: fclean all

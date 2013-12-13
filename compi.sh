# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    compilation.sh                                     :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccosta <ccosta@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/04 20:10:59 by ccosta            #+#    #+#              #
#    Updated: 2013/12/12 19:19:19 by ccosta           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

make -C libft/ fclean
make -C libft/
gcc -Wall -Wextra -Werror -I libft/includes/ -c get_next_line.c
gcc -Wall -Wextra -Werror -I libft/includes/ -c main.c
gcc -o test_gnl get_next_line.o main.o -L libft/ -lft

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taegon-i <taegon-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 15:23:46 by taegon-i          #+#    #+#             */
/*   Updated: 2020/01/22 15:04:12 by taegon-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <../libft/libft.h>
# include <stdio.h>

typedef struct			s_stack
{
	int					value;
	int					index;
	struct s_stack		*previous;
	struct s_stack		*next;
}						t_stack;

typedef struct			s_stack_all
{
	t_stack				*a_stack;
	t_stack				*b_stack;
	size_t				a_size;
	size_t				b_size;
}						t_stack_all;

/*
**	push_swap.c
*/

int		main(int argc, char *argv[]);

/*
**	error_messages.c
*/

void		error_message(int n);

#endif

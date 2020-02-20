/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taegon-i <taegon-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 15:23:46 by taegon-i          #+#    #+#             */
/*   Updated: 2020/02/20 10:31:48 by taegon-i         ###   ########.fr       */
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

/*
**	check_and_parse.c
*/

void 		add_in_a_stack(t_stack_all *stack, t_stack *elem);
void	parse_array(t_stack_all *stack, int argc, char **argv);
t_stack		*create_elem(int number);
void	parse_string(t_stack_all *stack, char *str);
t_stack_all	*contain_in_a(int argc, char *argv[]);



#endif

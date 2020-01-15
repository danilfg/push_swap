/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taegon-i <taegon-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 15:23:46 by taegon-i          #+#    #+#             */
/*   Updated: 2020/01/15 16:18:03 by taegon-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <../libft/libft.h>

# define ERROR write

typedef struct			s_stack
{
	int					value;
	int					index;
	struct s_stack_a	*previous;
	struct s_stack_a	*next;
}						t_stack;

typedef struct			s_stack_all
{
	t_stack				a_stack;
	t_stack				b_stack;
	int					a_size;
	int					b_size;
}						t_stack_all;

#endif

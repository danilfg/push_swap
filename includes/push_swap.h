/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taegon-i <taegon-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 15:23:46 by taegon-i          #+#    #+#             */
/*   Updated: 2020/01/15 16:15:48 by taegon-i         ###   ########.fr       */
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
	struct s_stack_a	*previous;
	struct s_stack_a	*next;
}						t_struct_all;


#endif

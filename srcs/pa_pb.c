/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taegon-i <taegon-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 12:54:42 by taegon-i          #+#    #+#             */
/*   Updated: 2020/02/20 13:18:10 by taegon-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack_all *stack_all)
{
	int tmp;
	t_stack *elem;

	if (stack_all->b_stack)
	{
		add_in_a_stack(stack_all, create_elem(stack_all->b_stack->value));
		
	}
}

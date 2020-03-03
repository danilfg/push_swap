/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb_rrr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taegon-i <taegon-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 11:30:22 by taegon-i          #+#    #+#             */
/*   Updated: 2020/03/03 11:52:00 by taegon-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb(t_stack_all *stack)
{
	t_stack *tmp;
	t_stack *tmp_last;


	tmp = NULL;
	tmp_last = NULL;

	if (stack->b_stack)
	{
		if (stack->b_stack->next)
		{
			if (stack->b_stack->next->next)
			{
				tmp = stack->b_stack;
				tmp_last = stack->b_stack->last;

				while (tmp->next != stack->b_stack->last)
					tmp = tmp->next;
				stack->b_stack->last = tmp;

				stack->b_stack->last->next = NULL;

				tmp_last->next = stack->b_stack;
				tmp_last->previous = NULL;
				stack->b_stack = tmp_last;
			}
			else
			{
				stack->check = 1;
				sb(stack);
				stack->check = 0;
			}
		}
	}
	if (stack->check == 0)
		printf("rrb\n");
}

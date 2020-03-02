/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcremin <jcremin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 12:24:23 by jcremin           #+#    #+#             */
/*   Updated: 2020/03/02 11:26:22 by taegon-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack_all *stack)
{
	t_stack *temp1;
	t_stack *temp2;

	temp1 = NULL;
	temp2 = NULL;
	if (stack->a_stack)
	{
		if (stack->a_stack->next)
		{
			if (stack->a_stack->next->next)
			{
				temp1 = create_elem(stack->a_stack->value);
				temp2 = stack->a_stack;
				while (temp2->next)
					temp2 = temp2->next;
				temp2->next = temp1;
				temp1->previous = temp2;
				*stack->a_stack = *stack->a_stack->next;
			}
			else
				sa(stack);
		}
	}
	if (stack->check == 0)
		printf("ra\n");
}

void	rb(t_stack_all *stack)
{
	t_stack *temp1;
	t_stack *temp2;

	temp1 = NULL;
	temp2 = NULL;
	if (stack->b_stack)
	{
		if (stack->b_stack->next)
		{
			if (stack->b_stack->next->next)
			{
				temp1 = create_elem(stack->b_stack->value);
				temp2 = stack->b_stack;
				while (temp2->next)
					temp2 = temp2->next;
				temp2->next = temp1;
				temp1->previous = temp2;
				*stack->b_stack = *stack->b_stack->next;
			}
			else
				sa(stack);
		}
	}
	if (stack->check == 0)
		printf("rb\n");
}

void	rr(t_stack_all *stack)
{
	stack->check = 1;
	ra(stack);
	rb(stack);
	stack->check = 0;
	printf("rr\n");
}

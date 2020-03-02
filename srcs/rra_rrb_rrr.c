/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb_rrr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taegon-i <taegon-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 11:30:22 by taegon-i          #+#    #+#             */
/*   Updated: 2020/03/02 11:35:36 by taegon-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb(stack_all *stack)
{
	int tmp;
	t_stack *temp;
	t_stack *temp2;

	temp = NULL;
	temp2 = NULL;
	if (stack->b_stack)
	{
		if (stack->b_stack->next)
		{
			if (stack->b_stack->next->next)
			{
				temp = stack->b_stack;
				while (temp->next)
					temp = temp->next;
				add_in_a_stack(stack, create_elem(temp->value));


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

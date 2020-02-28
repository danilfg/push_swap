/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcremin <jcremin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 12:24:23 by jcremin           #+#    #+#             */
/*   Updated: 2020/02/28 15:10:19 by jcremin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *last_elem(t_stack *stack)
{
	while (stack->next)
		stack = stack->next;
	return(stack);
}

void	ra(t_stack *stack)
{
	t_stack *temp1;
	t_stack *temp2;
	// t_stack *temp1_next;
	// t_stack *temp2_next;
	// t_stack *temp1_prev;
	// t_stack *temp2_prev;

	// t_stack *last;


	// temp1_next = NULL;
	// temp1_prev = NULL;
	// temp2_next = NULL;
	// temp2_prev = NULL;
	temp1 = NULL;
	temp2 = NULL;
	// last = NULL;

	if (stack)
	{
		if (stack->next)
		{
			if (stack->next->next)
			{


				temp1 = create_elem(stack->value);
				temp2 = stack;
				while (temp2->next)
					temp2 = temp2->next;
				temp2->next = temp1;
				temp1->previous = temp2;
				*stack = *stack->next;


				// next = stack->next;
				// // ft_putnbr(temp->value);
				// // ft_putnbr(last->value);
				// // ft_putnbr(next->value);
				//
				// last->next = temp;
				// // ft_putnbr(last->next->value);
				//
				//
				// temp->previous = last;
				// // ft_putnbr(temp->previous->value);
				//
				// temp->next = NULL;
				// next->previous = NULL;
				// *stack = *next;
				// stack->next->next->next = NULL;
				// *stack = *stack->next;


				// stack->previous = NULL;
				// last->next = temp;
				// temp->next = NULL;
				// temp->previous = last;
			}
			else
				sa(stack);
		}
	}
}

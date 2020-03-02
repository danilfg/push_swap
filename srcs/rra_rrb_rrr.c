/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb_rrr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taegon-i <taegon-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 11:30:22 by taegon-i          #+#    #+#             */
/*   Updated: 2020/03/02 15:32:13 by taegon-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb(t_stack_all *stack)
{
	t_stack *temp;


	temp = NULL;
	if (stack->b_stack)
	{
		if (stack->b_stack->next)
		{
			if (stack->b_stack->next->next)
			{
				


				// temp1 = stack->a_stack;
				// tmp = stack->a_stack->value;
				//
				// while (stack->a_stack->next)
				// {
				// 	stack->a_stack->value = stack->a_stack->next->value;
				// 	stack->a_stack = stack->a_stack->next;
				// }
				// stack->a_stack->value = tmp;
				// stack->a_stack = temp1;
				// temp = stack->b_stack->last;
				// ft_putnbr(temp->value);
				//
				// ft_putnbr(stack->b_stack->last->value);
				//
				// temp->next = NULL;
				//
				// add_in_b_stack(stack, create_elem(stack->b_stack->last->value));
				//

				//
				// tmp = stack->b_stack->value;
				// stack->b_stack = stack->b_stack->next;
				// stack->b_stack->previous = NULL;
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
	// t_stack *temp;
	//
	// temp = NULL;
	// if (stack->b_stack)
	// {
	// 	if (stack->b_stack->next)
	// 	{
	// 		if (stack->b_stack->next->next)
	// 		{
	// 			temp = stack->b_stack;
	// 			while (temp->next)
	// 				temp = temp->next;
	// 			add_in_b_stack(stack, create_elem(temp->value));
	// 			temp = temp->previous;
	// 			temp->next = NULL;
	// 			//
	// 			// temp1 = create_elem(stack->b_stack->value);
	// 			// temp2 = stack->b_stack;
	// 			// while (temp2->next)
	// 			// 	temp2 = temp2->next;
	// 			// temp2->next = temp1;
	// 			// temp1->previous = temp2;
	// 			// *stack->b_stack = *stack->b_stack->next;
	// 		}
	// 		else
	// 			sa(stack);
	// 	}
	// }
	// if (stack->check == 0)
	// 	printf("rrb\n");
}

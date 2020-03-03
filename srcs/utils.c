/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taegon-i <taegon-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 12:00:33 by taegon-i          #+#    #+#             */
/*   Updated: 2020/03/03 12:14:05 by taegon-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	rrx(t_stack_all *stack_all, t_stack *stack)
{
	t_stack *tmp;
	t_stack *tmp_last;

	tmp = NULL;
	tmp_last = NULL;
	if (stack)
	{
		if (stack->next)
		{
			if (stack->next->next)
			{
				tmp = stack;
				tmp_last = stack->last;

				while (tmp->next != stack->last)
					tmp = tmp->next;
				stack->last = tmp;

				stack->last->next = NULL;

				tmp_last->next = stack;
				tmp_last->previous = NULL;
				stack = tmp_last;
			}
			else
			{
				stack_all->check = 1;
				sa(stack_all);
				stack_all->check = 0;
			}
		}
		else
			stack_all->check = 1;
	}
	else
		stack_all->check = 1;
	ft_putnbr(stack->last->value);
}

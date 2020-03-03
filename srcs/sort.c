/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taegon-i <taegon-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 13:50:32 by taegon-i          #+#    #+#             */
/*   Updated: 2020/03/03 15:18:58 by taegon-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	found_small(t_stack *stack)
{
	int value;
	int counter;
	t_stack *tmp;

	counter = 0;
	tmp = NULL;
	value = stack->value;
	tmp = stack;
	while (stack)
	{
		if (value > stack->value)
		{
			value = stack->value;
			tmp = stack;
		}
		else
		{
			stack = stack->next;
			counter++;
		}
	}
	ft_putnbr(value);
	ft_putnbr(tmp->value);

}

// void	small_to_up_stack(t_stack_all *stack)
// {
//
// }

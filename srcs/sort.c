/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taegon-i <taegon-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 13:50:32 by taegon-i          #+#    #+#             */
/*   Updated: 2020/03/03 16:17:07 by taegon-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	found_small(t_stack *stack)
{
	int value;
	size_t counter;
	int check;
	t_stack *tmp;

	counter = 1;
	check = 1;
	tmp = NULL;
	value = stack->value;
	tmp = stack;
	while (stack)
	{
		if (value > stack->value)
		{
			value = stack->value;
			tmp = stack;
			check = 1;
		}
		else
		{
			printf("CHECK2 = %d\n", check);

			stack = stack->next;

			if (stack && check == 0)
			{
				counter++;
				printf("COUNTER2 = %zu\n", counter);

			}
			check = 0;
			
		}


	}
	ft_putnbr(value);
	write(1, "\n", 1);
	// ft_putnbr(tmp->value);
	// write(1, "\n", 1);
	//
	ft_putnbr(counter);
	write(1, "\n", 1);
	//
	return (counter);
}

// void	small_to_up_stack(t_stack_all *stack_all, size_t counter)
// {
// 	if (counter > stack_all->a_size % 2)
// 	{
// 		while
// 	}
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taegon-i <taegon-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 15:24:29 by taegon-i          #+#    #+#             */
/*   Updated: 2020/02/20 10:24:14 by taegon-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int argc, char *argv[])
{
	t_stack_all		*stack_all;

	if (argc < 2)
	{
		error_message(1);
		return(0);
	}
	if (!ft_isnum(argv[1], 10))
	{
		error_message(2);
		return(0);
	}
	stack_all = contain_in_a(argc, argv);
	printf("previous->value - %d\n", stack_all->a_stack->previous->value);
	printf("value - %d\n", stack_all->a_stack->value);
	printf("next->value - %d\n", stack_all->a_stack->next->value);
	printf("next->next->value - %d\n", stack_all->a_stack->next->next->value);
	printf("next->next->next->value - %d\n\n", stack_all->a_stack->next->next->next->value);

	printf("index - %d\n", stack_all->a_stack->index);
	printf("next->index - %d\n\n", stack_all->a_stack->next->index);

	printf("a_size - %zu\n", stack_all->a_size);
	printf("b_size - %zu\n", stack_all->b_size);

	return (0);
}

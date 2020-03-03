/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taegon-i <taegon-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 15:24:29 by taegon-i          #+#    #+#             */
/*   Updated: 2020/03/03 11:53:46 by taegon-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int argc, char *argv[])
{
	t_stack_all		*stack_all;

	if (argc < 2)
		error_message(1);
	stack_all = contain_in_a(argc, argv);


	// pb(stack_all);

	pb(stack_all);
	pb(stack_all);

	pb(stack_all);
	pb(stack_all);
	pb(stack_all);
	rrb(stack_all);


	// rb(stack_all);
	// rrb(stack_all);

	// ss(stack_all);
	// sb(stack_all);

	while(stack_all->a_stack)
	{
		printf("A value - %d\n", stack_all->a_stack->value);
		stack_all->a_stack = stack_all->a_stack->next;
	}
	printf("\n");
	// while(stack_all->b_stack)
	// {
	// 	printf("B value - %d\n", stack_all->b_stack->value);
	// 	stack_all->b_stack = stack_all->b_stack->next;
	// }

	while(stack_all->b_stack)
	{
		printf("B value - %d\n", stack_all->b_stack->value);
		stack_all->b_stack = stack_all->b_stack->next;
	}

	printf("a_size - %zu\n", stack_all->a_size);
	printf("b_size - %zu\n", stack_all->b_size);

	// printf("a_last - %d\n", stack_all->a_stack->last->value);
	return (0);
}

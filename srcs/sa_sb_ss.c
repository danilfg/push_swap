/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taegon-i <taegon-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 12:12:05 by taegon-i          #+#    #+#             */
/*   Updated: 2020/02/20 12:49:53 by taegon-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *stack)
{
	int tmp;

	tmp = stack->value;
	stack->value = stack->next->value;
	stack->next->value = tmp;
	printf("sa");
}

void	sb(t_stack *stack)
{
	int tmp;

	tmp = stack->value;
	stack->value = stack->next->value;
	stack->next->value = tmp;
	printf("sb");
}

void	ss(t_stack *stack)
{
	sa(stack);
	sb(stack);
	printf("ss");
}

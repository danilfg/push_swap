/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taegon-i <taegon-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 15:24:29 by taegon-i          #+#    #+#             */
/*   Updated: 2020/01/22 15:28:00 by taegon-i         ###   ########.fr       */
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
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_messages.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taegon-i <taegon-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 13:25:04 by taegon-i          #+#    #+#             */
/*   Updated: 2020/01/22 15:09:11 by taegon-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		error_message(int n)
{
	if (n == 1)
		printf("ERROR: only 1 arguments");
	if (n == 2)
		printf("ERROR: arguments is not numbers");
	if (n == 3)
		printf("ERROR: malloc error");
	if (n == 4)
		printf("ERROR: arguments is not INT's");
}

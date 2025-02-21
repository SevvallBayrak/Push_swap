/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sevvalbayrak <sevvalbayrak@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 23:45:22 by saksoy            #+#    #+#             */
/*   Updated: 2025/02/21 22:56:32 by sevvalbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_swap	*index)
{
	int	temp;

	if (index->a_len < 2)
		return ;
	temp = index->stack_a[0];
	index->stack_a[0] = index->stack_a[1];
	index->stack_a[1] = temp;
	write(1, "sa\n", 3);
}

void	swap_b(t_swap	*index)
{
	int	temp;

	if (index->b_len < 2)
		return ;
	temp = index->stack_b[0];
	index->stack_b[0] = index->stack_b[1];
	index->stack_b[1] = temp;
	write(1, "sb\n", 3);
}

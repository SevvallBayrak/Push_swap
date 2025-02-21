/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sevvalbayrak <sevvalbayrak@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 23:46:08 by saksoy            #+#    #+#             */
/*   Updated: 2025/02/21 22:56:20 by sevvalbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_swap	*index)
{
	int	temp;
	int	i;

	i = 0;
	while (i < index->a_len -1)
	{
		temp = index->stack_a[i + 1];
		index->stack_a[i + 1] = index->stack_a[i];
		index->stack_a[i] = temp;
		++i;
	}
	write(1, "ra\n", 3);
}

void	rotate_b(t_swap	*index)
{
	int	temp;
	int	i;

	i = 0;
	while (i < index->b_len -1)
	{
		temp = index->stack_b[i + 1];
		index->stack_b[i + 1] = index->stack_b[i];
		index->stack_b[i] = temp;
		++i;
	}
	write(1, "rb\n", 3);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sevvalbayrak <sevvalbayrak@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 23:07:07 by saksoy            #+#    #+#             */
/*   Updated: 2025/02/21 22:56:05 by sevvalbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_b(t_swap *index)
{
	int	i;

	if (index->a_len <= 0)
		return ;
	i = index->b_len;
	while (i > 0)
	{
		index->stack_b[i] = index->stack_b[i - 1];
		i--;
	}
	index->stack_b[0] = index->stack_a[0];
	i = 0;
	while (i < index->a_len - 1)
	{
		index->stack_a[i] = index->stack_a[i + 1];
		i++;
	}
	index->a_len--;
	index->b_len++;
	write(1, "pb\n", 3);
}

void	push_a(t_swap *index)
{
	int	i;

	if (index->b_len <= 0)
		return ;
	i = index->a_len;
	while (i > 0)
	{
		index->stack_a[i] = index->stack_a[i - 1];
		i--;
	}
	index->stack_a[0] = index->stack_b[0];
	i = 0;
	while (i < index->b_len - 1)
	{
		index->stack_b[i] = index->stack_b[i + 1];
		i++;
	}
	index->b_len--;
	index->a_len++;
	write(1, "pa\n", 3);
}

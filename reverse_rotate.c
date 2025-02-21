/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sevvalbayrak <sevvalbayrak@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 00:23:17 by akocabas          #+#    #+#             */
/*   Updated: 2025/02/21 22:56:16 by sevvalbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_a(t_swap *index)
{
	int	temp;
	int	i;

	i = index->a_len;
	while (i > 1)
	{
		--i;
		temp = index->stack_a[i];
		index->stack_a[i] = index->stack_a[i - 1];
		index->stack_a[i - 1] = temp;
	}
	write(1, "rra\n", 4);
}

void	reverse_rotate_b(t_swap *index)
{
	int	temp;
	int	i;

	i = index->b_len;
	while (i > 1)
	{
		--i;
		temp = index->stack_b[i];
		index->stack_b[i] = index->stack_b[i - 1];
		index->stack_b[i - 1] = temp;
	}
	write(1, "rrb\n", 4);
}

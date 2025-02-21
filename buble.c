/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buble.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sevvalbayrak <sevvalbayrak@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 12:44:52 by saksoy            #+#    #+#             */
/*   Updated: 2025/02/21 22:55:24 by sevvalbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	bg_sort_min(t_swap *index)
{
	int	i;
	int	temp;
	int	len;

	i = 0;
	len = index->a_len;
	while (i < len)
	{
		index->sorted[i] = index->stack_a[i];
		i++;
	}
	i = 0;
	while (i < len - 1)
	{
		if (index->sorted[i] > index->sorted[i + 1])
		{
			temp = index->sorted[i];
			index->sorted[i] = index->sorted[i + 1];
			index->sorted[i + 1] = temp;
			i = -1;
		}
		i++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   little_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sevvalbayrak <sevvalbayrak@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:28:43 by saksoy            #+#    #+#             */
/*   Updated: 2025/02/21 22:55:44 by sevvalbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_sort(t_swap *index)
{
	int	len;
	int	last;
	int	mid;
	int	first;

	len = index->a_len;
	last = index->stack_a[len - 1];
	mid = index->stack_a[len - 2];
	first = index->stack_a[len - 3];
	if (first > mid && first < last && mid < last)
		swap_a(index);
	if (first < mid && first < last && mid > last)
	{
		reverse_rotate_a(index);
		swap_a(index);
	}
	else if (first > mid && first > last && mid > last)
	{
		swap_a(index);
		reverse_rotate_a(index);
	}
	else if (first > mid && first > last && mid < last)
		rotate_a(index);
	else if (first < mid && first > last && mid > last)
		reverse_rotate_a(index);
}

void	ft_sort_four(t_swap *index)
{
	if (index->b_len == 0)
	{
		while (index->stack_a[0] != 0)
			reverse_rotate_a(index);
	}
	else if (index->b_len == 1)
	{
		while (index->stack_a[0] != 1)
			reverse_rotate_a(index);
	}
	push_b(index);
	three_sort(index);
	push_a(index);
}

void	ft_sort_five(t_swap *index)
{
	while (index->stack_a[0] != 0)
		reverse_rotate_a(index);
	push_b(index);
	ft_sort_four(index);
	push_a(index);
}

void	one_arg(t_swap *index)
{
	if (index->a_len == 1)
	{
		write(2, "Error\n", 6);
		exit_swap(index);
	}
}

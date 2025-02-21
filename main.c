/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sevvalbayrak <sevvalbayrak@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 16:00:02 by saksoy            #+#    #+#             */
/*   Updated: 2025/02/22 00:23:08 by sevvalbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	exit_swap(t_swap *index)
{
	free(index->stack_a);
	free(index->stack_b);
	free(index->sorted);
	free(index->sorted_inx);
	free(index);
	exit(0);
}

void	free_list(char **list)
{
	char	**head;

	head = list;
	while (list && *list)
		free(*list++);
	free(head);
}

t_swap	*init(char **argv)
{
	char	*str;
	char	**arr;
	t_swap	*swap;
	int		len;

	len = 0;
	str = get_argv(argv);
	arr = ft_split(str, ' ');
	while (arr[len])
		len++;
	swap = ft_calloc(1, sizeof(t_swap));
	swap->stack_a = malloc(sizeof(int) * len);
	swap->stack_b = malloc(sizeof(int) * len);
	swap->sorted = malloc(sizeof(int) * len);
	swap->sorted_inx = malloc(sizeof(int) * len);
	swap->a_len = len;
	set_values(str, swap);
	free_list(arr);
	free(str);
	check_all_num(str, swap);
	return (swap);
}

void	error_control(t_swap *index)
{
	check_sorted(index);
	check_repeat(index);
}

int	main(int argc, char **argv)
{
	t_swap	*index;

	if (argc > 1)
	{
		index = init(argv);
		error_control(index);
		bg_sort_min(index);
		find_idx(index);
		one_arg(index);
		if (index->a_len == 3)
			three_sort(index);
		else if (index->a_len == 4)
			ft_sort_four(index);
		else if (index->a_len == 5)
			ft_sort_five(index);
		else if (index->a_len >= 6)
			radix_sort(index);
	}
	else
	{
		write(2, "Error\n", 6);
		return (0);
	}
	exit_swap(index);
	return (0);
}

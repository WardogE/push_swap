/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbullock <vbullock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 18:14:15 by vbullock          #+#    #+#             */
/*   Updated: 2025/07/18 18:03:09 by vbullock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_max(t_node *a)
{
	int	max;

	max = -2147483648;
	while (a)
	{
		if (a->value > max)
			max = a->value;
		a = a->next;
	}
	return (max);
}

int	get_max_bits(t_node *stack)
{
	int	max;
	int	max_num;

	max = 0;
	max_num = stack_max(stack);
	while ((max_num >> max) != 0)
		max++;
	return (max);
}

void	radix_sort(t_node **a, t_node **b, int size)
{
	int		i;
	int		j;
	int		num;
	int		max_bits;

	i = 0;
	max_bits = get_max_bits(*a);
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			num = (*a)->value;
			if (((num >> i) & 1) == 0)
				pb(a, b);
			else
				ra(a);
			j++;
		}
		while (*b)
			pa(a, b);
		i++;
	}
}

void	print_list(t_node *head)
{
	while (head)
	{
		printf("%d -> ", head->value);
		head = head->next;
	}
	printf("NULL\n");
}

int	main(int argc, char **argv)
{
	t_node	*stack_a;
	int		*nums;
	int		chk;
	int		i;
	int		size;

	chk = chk_arg(argc, argv);
	if (chk == 0)
		return (write(1, "Error. Only input integers.", 27));
	nums = parse_nums(argc, argv, &size);
	chk = chk_repeat(nums, size);
	if (chk == -1)
		return (write(1, "Error. Repeat numbers.", 22));
	i = 0;
	stack_a = ints_to_linked_list(nums, size);
	radix_sort(&stack_a, NULL, size);
	free(nums);
	print_list(stack_a);
	return (1);
}

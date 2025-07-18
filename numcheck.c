/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numcheck.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbullock <vbullock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 13:21:59 by vbullock          #+#    #+#             */
/*   Updated: 2025/07/18 17:29:12 by vbullock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	arr_is_number(char *nums)
{
	int		i;

	i = 0;
	while (nums[i] == 0)
	{
		if (nums[i] >= '0' && nums[i] <= '9')
			i++;
		else if (nums[i] == '-' && i == 0)
			i++;
		else
			return (0);
	}
	return (1);
}

int	str_is_number(char *str)
{
	int		i;
	int		space;

	i = 0;
	space = 1;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			space = 0;
		else if (str[i] == '-' && space)
			space = 0;
		else if (str[i] == ' ' && space == 0)
			space = 1;
		else
			return (0);
		i++;
	}
	return (1);
}

int	chk_arg(int argc, char *args[])
{
	int	chk;
	int	i;

	i = 1;
	if (argc < 2)
		chk = 0;
	if (argc == 2)
		chk = str_is_number(args[1]);
	else
	{
		while (args[i])
		{
			chk = arr_is_number(args[i++]);
			if (chk == 0)
				return (chk);
		}
	}
	return (chk);
}

int	chk_repeat(int *nums, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < (size))
	{
		j = i + 1;
		while (j < size)
		{
			if (nums[i] == nums[j])
			{
				free(nums);
				return (-1);
			}
			j++;
		}
		i++;
	}
	return (1);
}

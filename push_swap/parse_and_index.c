/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_and_index.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbullock <vbullock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 17:35:57 by vbullock          #+#    #+#             */
/*   Updated: 2025/07/17 17:36:10 by vbullock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*arrtoi(char *nums, int *count)
{
	char	**list;
	int		*ints;
	int		i;

	i = 0;
	list = ft_split(nums, 32);
	count[0] = 0;
	while (list[count[0]])
		count[0]++;
	ints = malloc(sizeof(int) * (count[0] + 1));
	if (!ints)
		return (NULL);
	while (i < count[0])
	{
		ints[i] = ft_atoi(list[i]);
		i++;
	}
	ft_free(list, i);
	return (ints);
}

int	*index_list(int *list, int size)
{
	int	*index;
	int	i;
	int	j;
	int	count;

	index = malloc(sizeof(int) * (size + 1));
	if (!index)
		return (NULL);
	i = 0;
	while (i < size)
	{
		count = 1;
		j = 0;
		while (j < size)
			if (list[i] > list[j++])
				count++;
		index[i] = count;
		i++;
	}
	free(list);
	return (index);
}

int	*parse_nums(int argc, char **str, int *count)
{
	int	*index;
	int	i;

	i = 0;
	count[0] = 0;
	if (argc == 2)
		index = arrtoi(str[1], count);
	else
	{
		while (str[count[0] + 1])
			count[0]++;
		index = malloc(sizeof(int) * (count[0] + 1));
		if (!index)
			return (NULL);
		i++;
		while (str[i])
		{
			index[i - 1] = ft_atoi(&str[i][0]);
			i++;
		}
	}
	index = index_list(index, count[0]);
	return (index);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbullock <vbullock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:17:57 by vbullock          #+#    #+#             */
/*   Updated: 2025/07/18 17:36:54 by vbullock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_isspace(char c)
{
	if (c == ' ' || c == '\n'
		|| c == '\t' || c == '\v'
		|| c == '\f' || c == '\r')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	result;
	int	neg;
	int	index;

	index = 0;
	result = 0;
	neg = 0;
	while (ft_isspace(str[index]))
		index++;
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			neg = -1;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		result = (result * 10) + (str[index] - '0');
		index++;
	}
	if (neg)
		result = -result;
	return (result);
}

void	*ft_calloc(size_t count, size_t size)
{
	char			*tmp;
	size_t			index;

	tmp = malloc(count * size);
	if (!tmp)
		return (NULL);
	index = 0;
	while (index < (count * size))
	{
		tmp[index] = 0;
		index++;
	}
	return (tmp);
}

size_t	ft_strlen(const char *s)
{
	int	count;

	count = 0;
	while (s[count])
	{
		count++;
	}
	return (count);
}

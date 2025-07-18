/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbullock <vbullock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 20:10:53 by vbullock          #+#    #+#             */
/*   Updated: 2024/10/03 14:09:50 by vbullock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_lstsize(t_list *lst)
{
	t_list	*handle;
	int		count;

	handle = lst;
	count = 0;
	while (handle)
	{
		count++;
		handle = handle -> next;
	}
	return (count);
}

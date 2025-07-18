/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbullock <vbullock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 21:26:44 by vbullock          #+#    #+#             */
/*   Updated: 2024/10/02 21:31:35 by vbullock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*handle;

	while (*lst)
	{
		handle = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = handle;
	}
	free(*lst);
	*lst = NULL;
}

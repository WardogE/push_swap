/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbullock <vbullock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 16:44:04 by vbullock          #+#    #+#             */
/*   Updated: 2025/07/16 02:49:18 by vbullock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Function to create a new node
t_node	*create_node(int value)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (!new_node)
	{
		perror("Failed to allocate memory");
		exit(EXIT_FAILURE);
	}
	new_node->value = value;
	new_node->next = NULL;
	return (new_node);
}

// Function to convert a double pointer of strings to a linked list
t_node	*ints_to_linked_list(int *index, int size)
{
	t_node	*head;
	t_node	*tail;
	t_node	*new_node;
	int		i;

	if (!index || !*index)
		return (NULL);
	head = NULL;
	tail = NULL;
	i = 0;
	while (i < size)
	{
		new_node = create_node(index[i]);
		if (!head)
			head = new_node;
		else
			tail->next = new_node;
		tail = new_node;
		i++;
	}
	return (head);
}

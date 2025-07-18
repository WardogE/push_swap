/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbullock <vbullock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:19:48 by vbullock          #+#    #+#             */
/*   Updated: 2025/07/17 18:02:02 by vbullock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

typedef struct s_node
{
	int				value;
	struct s_node	*next;
}	t_node;

t_node	*ints_to_linked_list(int *index, int size);
t_node	*create_node(int value);
size_t	ft_strlen(const char *s);
char	**ft_split(const char *s, char c);
int		has_duplicate(t_node *head, int value);
int		is_valid_number(const char *str);
int		is_valid_and_unique(char **nums);
int		ft_atoi(const char *str);
int		chk_arg(int argc, char *args[]);
int		chk_repeat(int *nums, int size);
int		*parse_nums(int argc, char **str, int *count);
void	*ft_calloc(size_t count, size_t size);
void	*ft_free(char **strs, int count);
void	pa(t_node **a, t_node **b);
void	pb(t_node **a, t_node **b);
void	sa(t_node **a);
void	sb(t_node **b);
void	ss(t_node **a, t_node **b);
void	ra(t_node **a);
void	rb(t_node **b);
void	rr(t_node **a, t_node **b);
void	rra(t_node **a);
void	rrb(t_node **b);
void	rrr(t_node **a, t_node **b);

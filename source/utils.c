/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 01:18:09 by cstoia            #+#    #+#             */
/*   Updated: 2024/05/12 20:28:31 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Function to find the maximum node in the linked list
t_list	*ft_find_max_node(t_list *stack)
{
	int		max;
	t_list	*max_node;

	max = stack->content;
	while (stack)
	{
		if (stack->content > max)
		{
			max = stack->content;
			max_node = stack;
		}
		stack = stack->next;
	}
	return (max_node);
}

// Function that find the index for each node(element)
void	ft_find_index(t_list *stack_a)
{
	int	i;

	i = 0;
	if (!stack_a)
		return ;
	while (stack_a)
	{
		stack_a->index = i;
		i++;
		stack_a = stack_a->next;
	}
}

// Function that frees all the nodes from the linked list
void	ft_lstfree(t_list *stack)
{
	t_list	*temp;

	while (stack != NULL)
	{
		temp = stack;
		stack = stack->next;
		free(temp);
	}
}

// Counts how many elements from the start of the linked list until the index
int	ft_distance_to_index(t_list *stack, int index)
{
	int	i;

	i = 0;
	while (stack != NULL && stack->index != index)
	{
		i++;
		stack = stack->next;
	}
	return (i);
}

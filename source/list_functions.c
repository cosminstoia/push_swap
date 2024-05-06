/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 01:18:09 by cstoia            #+#    #+#             */
/*   Updated: 2024/05/06 16:57:16 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Function that prints all the nodes in a linked list
void	ft_printlst(t_list *head)
{
	while (head != NULL)
	{
		ft_printf("%d\n", head->content);
		head = head->next;
	}
}

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

t_list	*ft_find_min_node(t_list *stack)
{
	int		min;
	t_list	*min_node;

	min = stack->content;
	while (stack)
	{
		if (stack->content < min)
		{
			min = stack->content;
			min_node = stack;
		}
		stack = stack->next;
	}
	return (min_node);
}

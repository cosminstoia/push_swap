/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 23:30:35 by cstoia            #+#    #+#             */
/*   Updated: 2024/05/07 01:16:07 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Function that find the index for each node(element)
void	ft_find_index(t_list *stack)
{
	int	i;

	i = 0;
	if (!stack)
		return ;
	while (stack)
	{
		stack->index = i;
		i++;
		stack = stack->next;
	}
}

// Function to find if the node is above median of the list
void	ft_find_if_above_median(t_list *stack)
{
	int	median;

	if (!stack)
		return ;
	median = ft_lstsize(stack) / 2;
	while (stack)
	{
		if (stack->index <= median)
			stack->median = 1;
		else
			stack->median = 0;
		stack = stack->next;
	}
}

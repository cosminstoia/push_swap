/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:56:36 by cstoia            #+#    #+#             */
/*   Updated: 2024/05/07 01:15:33 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Push the first 2 nodes from stack_a to stack_b
int	ft_push_first_2_nodes(t_list **stack_a, t_list **stack_b)
{
	int	size;

	size = ft_lstsize(*stack_a);
	if (size > 3)
	{
		ft_pb(stack_a, stack_b);
		size--;
	}
	if (size > 3)
	{
		ft_pb(stack_a, stack_b);
		size--;
	}
	return (size);
}

void	ft_sort_stack(t_list **stack_a, t_list **stack_b)
{
	ft_push_first_2_nodes(stack_a, stack_b);
	ft_find_index(stack_a);
	ft_find_if_above_median(stack_a);
	ft_find_index(stack_b);
	ft_find_if_above_median(stack_b);
}

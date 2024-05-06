/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_function.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 01:18:09 by cstoia            #+#    #+#             */
/*   Updated: 2024/05/06 16:35:37 by cstoia           ###   ########.fr       */
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

void	ft_sort_three(t_list **stack)
{
	t_list	*max_node;

	max_node = ft_find_max_node(*stack);
	if (max_node == *stack)
		ft_ra(stack);
	else if ((*stack)->next == max_node)
		ft_rra(stack);
	if ((*stack)->content > (*stack)->next->content)
		ft_sa(stack);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 14:43:40 by cstoia            #+#    #+#             */
/*   Updated: 2024/05/03 16:35:22 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Swap function to swap the elements of the list
void	swap(t_list **stack)
{
	int	*temp;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		temp = &(*stack)->content;
		(*stack)->content = (*stack)->next->content;
		(*stack)->next->content = *temp;
	}
}

// Swap stack a
void	sa(t_list **stack_a)
{
	swap(stack_a);
}

// Swap stack b
void	sb(t_list **stack_b)
{
	swap(stack_b);
}

// Swap both stacks
void	ss(t_list **stack_a, t_list **stack_b)
{
	swap(stack_a);
	swap(stack_b);
}

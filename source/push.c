/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 14:05:26 by cstoia            #+#    #+#             */
/*   Updated: 2024/05/03 15:37:25 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Function that push the top element of stack b to stack a
void	pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*temp;

	if (*stack_b != NULL)
	{
		temp = *stack_b;
		*stack_b = (*stack_b)->next;
		temp->next = *stack_a;
		*stack_a = temp;
	}
}

// Function that push the top element of stack a to stack b
void	pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*temp;

	if (*stack_a != NULL)
	{
		temp = *stack_a;
		*stack_a = (*stack_a)->next;
		temp->next = *stack_b;
		*stack_b = temp;
	}
}

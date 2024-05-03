/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 15:00:24 by cstoia            #+#    #+#             */
/*   Updated: 2024/05/03 15:08:05 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Rotate the stack by shifting all elements by 1
void	rotate(t_list **stack)
{
	t_list	*last;
	t_list	*second_last;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		last = *stack;
		while (last->next != NULL)
		{
			second_last = last;
			last = last->next;
		}
		second_last->next = NULL;
		last->next = *stack;
		*stack = last;
	}
}

// Rotate stack a
void	ra(t_list **stack_a)
{
	rotate(stack_a);
}

// Rotate stack b
void	rb(t_list **stack_b)
{
	rotate(stack_b);
}

// Rotate both stacks
void	rr(t_list **stack_a, t_list **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
}

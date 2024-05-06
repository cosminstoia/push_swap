/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 15:41:49 by cstoia            #+#    #+#             */
/*   Updated: 2024/05/06 16:20:57 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Perform reverse rotation of a stack
void	ft_reverse_rotate(t_list **stack)
{
	t_list	*last;
	t_list	*second_last;

	last = *stack;
	second_last = NULL;
	if (*stack != NULL && (*stack)->next != NULL)
	{
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

// Perform reverse rotation of stack a
void	ft_rra(t_list **stack_a)
{
	ft_reverse_rotate(stack_a);
}

// Perform reverse rotation of stack b
void	ft_rrb(t_list **stack_b)
{
	ft_reverse_rotate(stack_b);
}

// Performe reverse rotation for both stacks
void	ft_rrr(t_list **stack_a, t_list **stack_b)
{
	ft_reverse_rotate(stack_a);
	ft_reverse_rotate(stack_b);
}

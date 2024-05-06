/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 14:43:40 by cstoia            #+#    #+#             */
/*   Updated: 2024/05/06 16:31:59 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Swap function to swap the elements of the list
void	ft_swap(t_list **stack)
{
	int	temp;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		temp = (*stack)->content;
		(*stack)->content = (*stack)->next->content;
		(*stack)->next->content = temp;
	}
}

// Swap stack a
void	ft_sa(t_list **stack_a)
{
	ft_swap(stack_a);
}

// Swap stack b
void	ft_sb(t_list **stack_b)
{
	ft_swap(stack_b);
}

// Swap both stacks
void	ft_ss(t_list **stack_a, t_list **stack_b)
{
	ft_swap(stack_a);
	ft_swap(stack_b);
}

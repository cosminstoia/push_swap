/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 14:05:26 by cstoia            #+#    #+#             */
/*   Updated: 2024/05/12 20:26:37 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Function that push the top element of stack b to stack a
void	ft_pa(t_list *stack_a, t_list *stack_b)
{
	t_list	*temp;

	if (stack_b != NULL)
	{
		temp = stack_b;
		stack_b = stack_b->next;
		temp->next = stack_a;
		stack_a = temp;
	}
	ft_printf("pa\n");
}

// Function that push the top element of stack a to stack b

void	ft_pb(t_list *stack_a, t_list *stack_b)
{
	int		i;
	t_list	*temp;

	if (stack_b == NULL)
		return ;
	temp = (t_list *)malloc(sizeof(t_list));
	if (!temp)
		return ;
	i = stack_b->index;
	temp->content = stack_b->content;
	temp->index = i;
	temp->next = stack_a;
	ft_printf("pb\n");
}

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
	ft_printf("rr\n");
}

// Rotate the stack by shifting all elements by 1
void	ft_rotate(t_list *stack)
{
	t_list	*last;
	t_list	*second_last;

	if (stack != NULL && stack->next != NULL)
	{
		last = stack;
		while (last->next != NULL)
		{
			second_last = last;
			last = last->next;
		}
		second_last->next = NULL;
		last->next = stack;
		stack = last;
	}
	ft_printf("r\n");
}

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
	ft_printf("swap\n");
}

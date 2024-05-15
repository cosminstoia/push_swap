/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 14:05:26 by cstoia            #+#    #+#             */
/*   Updated: 2024/05/14 15:03:39 by cstoia           ###   ########.fr       */
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
		while (last->next->next != NULL)
		{
			last = last->next;
		}
		second_last = last->next;
		last->next = NULL;
		second_last->next = *stack;
		*stack = second_last;
	}
	ft_printf("rr\n");
}

// Rotate the stack by shifting all elements by 1
void	ft_rotate(t_list **stack, int x)
{
	t_list	*tmp;
	t_list	*current;

	if (stack == NULL || (*stack)->next == NULL)
		return ;
	tmp = *stack;
	*stack = tmp->next;
	current = *stack;
	while (current->next != NULL)
		current = current->next;
	current->next = tmp;
	tmp->next = NULL;
	if (x == 0)
		ft_printf("rb\n");
	else if (x == 1)
		ft_printf("ra\n");
}

// Swap function to swap the elements of the list
void	ft_swap(t_list **stack, int x)
{
	int	temp;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		temp = (*stack)->content;
		(*stack)->content = (*stack)->next->content;
		(*stack)->next->content = temp;
	}
	if (x == 0)
		ft_printf("sa\n");
	else if (x == 1)
		ft_printf("sb\n");
}

// Function that push top element from one stack to the other
void	ft_push(t_list **stack_a, t_list **stack_b, int x)
{
	int		index;
	t_list	*temp;

	index = (*stack_a)->index;
	ft_lstadd_front(stack_b, ft_lstnew((*stack_a)->content));
	temp = *stack_a;
	*stack_a = (*stack_a)->next;
	free(temp);
	if (x == 0)
		ft_printf("pb\n");
	else if (x == 1)
		ft_printf("pa\n");
}

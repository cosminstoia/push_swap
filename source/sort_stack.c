/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:56:36 by cstoia            #+#    #+#             */
/*   Updated: 2024/05/17 15:54:55 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Function to sort small number of elements
void	ft_sort_small(t_list **stack, int x)
{
	int	max;

	max = ft_find_max_index(*stack);
	while (!ft_check_if_sorted(*stack))
	{
		if ((*stack)->index == max)
			ft_rotate(stack, 0);
		else if ((*stack)->next->index == max)
			ft_reverse_rotate(stack, 0);
		else
			ft_swap(stack, 0);
	}
	if (x == 1)
		ft_lstfree(*stack);
}

// Function that sorts 5 element stack
void	ft_sort_five(t_list **stack_a, t_list **stack_b, int size)
{
	while (size > 3)
	{
		if ((*stack_a)->index == 0 || (*stack_a)->index == 1)
		{
			ft_push(stack_a, stack_b, 1);
			size--;
		}
		else
			ft_rotate(stack_a, 0);
	}
	ft_sort_small(stack_a, 0);
	while (ft_lstsize(*stack_b) > 0)
	{
		ft_push(stack_b, stack_a, 0);
	}
	if (!ft_check_if_sorted(*stack_a))
		ft_swap(stack_a, 0);
	ft_lstfree(*stack_a);
}

// Moves the elements from stack a to stack b,obtaining the "K" shape
void	ft_k_sort_a_to_b(t_list **stack_a, t_list **stack_b, int size)
{
	int	i;
	int	range;

	i = 0;
	range = ft_sqrt(size) * 14 / 10;
	while (*stack_a)
	{
		if ((*stack_a)->index <= i)
		{
			ft_push(stack_a, stack_b, 1);
			ft_rotate(stack_b, 1);
			i++;
		}
		else if ((*stack_a)->index <= i + range)
		{
			ft_push(stack_a, stack_b, 1);
			i++;
		}
		else
			ft_rotate(stack_a, 0);
	}
}

// Moves the elements from stack b to stack a,resulting the sorted list
void	ft_k_sort_b_to_a(t_list **stack_a, t_list **stack_b, int size)
{
	int	end_to_index;
	int	start_to_index;

	while (size - 1 >= 0)
	{
		start_to_index = ft_distance_to_index(*stack_b, size - 1);
		end_to_index = (size + 3) - start_to_index;
		if (start_to_index <= end_to_index)
		{
			while ((*stack_b)->index != size - 1)
				ft_rotate(stack_b, 1);
			ft_push(stack_b, stack_a, 0);
			size--;
		}
		else
		{
			while ((*stack_b)->index != size - 1)
				ft_reverse_rotate(stack_b, 1);
			ft_push(stack_b, stack_a, 0);
			size--;
		}
	}
}

// Checks for the size of the list and calls the sorting function
void	ft_sort_stack(t_list *stack_a)
{
	int		size;
	t_list	*stack_b;

	stack_b = NULL;
	size = ft_lstsize(stack_a);
	ft_find_index(stack_a, size);
	if (!ft_check_if_sorted(stack_a))
	{
		if (size == 2)
			ft_swap(&stack_a, 0);
		else if (size == 3)
			ft_sort_small(&stack_a, 1);
		else if (size <= 5)
			ft_sort_five(&stack_a, &stack_b, size);
		else
		{
			ft_k_sort_a_to_b(&stack_a, &stack_b, size);
			ft_k_sort_b_to_a(&stack_a, &stack_b, size);
			ft_lstfree(stack_a);
		}
	}
}

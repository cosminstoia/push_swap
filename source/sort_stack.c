/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:56:36 by cstoia            #+#    #+#             */
/*   Updated: 2024/05/12 20:27:51 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Sort small number of elements
void	ft_bubble_sort(t_list *stack)
{
	int		swap;
	int		temp_content;
	t_list	*current;
	t_list	*temp;

	current = stack;
	swap = 0;
	while (current->next != NULL)
	{
		temp = current->next;
		while (temp != NULL)
		{
			if (current->content > temp->content)
			{
				temp_content = current->content;
				current->content = temp->content;
				temp->content = temp_content;
				swap = 1;
			}
			temp = temp->next;
		}
		current = current->next;
	}
}

// Moves the elements from stack a to stack b,obtaining the "K" shape
void	ft_k_sort_a_to_b(t_list *stack_a, t_list *stack_b, int size)
{
	int	i;
	int	range;

	i = 0;
	range = ft_sqrt(size) * 14 / 10;
	while (stack_a)
	{
		if (stack_a->index <= i)
		{
			ft_pb(stack_a, stack_b);
			ft_rotate(stack_b);
			i++;
		}
		else if (stack_a->index <= i + range)
		{
			ft_pb(stack_a, stack_b);
			i++;
		}
		else
			ft_rotate(stack_a);
	}
}

// Moves the elements from stack b to stack a,resulting the sorted list
void	ft_k_sort_b_to_a(t_list *stack_a, t_list *stack_b, int size)
{
	int	end_to_index;
	int	start_to_index;

	while (size >= 0)
	{
		start_to_index = ft_distance_to_index(stack_b, size - 1);
		end_to_index = (size + 3) - start_to_index;
		if (start_to_index <= end_to_index)
		{
			while (stack_b->index != size - 1)
			{
				ft_rotate(stack_b);
				if (stack_b != NULL)
					ft_pb(stack_a, stack_b);
				size--;
			}
		}
		else
		{
			while (stack_b->index != size - 1)
			{
				ft_reverse_rotate(&stack_b);
				ft_pb(stack_a, stack_b);
				size--;
			}
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
	stack_b = (t_list *)malloc((size) * sizeof(t_list));
	if (!stack_b)
		return ;
	if (!ft_check_if_sorted(stack_a))
	{
		if (size == 2)
			ft_swap(&stack_a);
		else if (size <= 7)
			ft_bubble_sort(stack_a);
		else if (size > 7)
		{
			ft_k_sort_a_to_b(stack_a, stack_b, size);
			ft_k_sort_b_to_a(stack_a, stack_b, size);
		}
	}
}

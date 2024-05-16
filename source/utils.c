/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 01:18:09 by cstoia            #+#    #+#             */
/*   Updated: 2024/05/16 01:42:59 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Function that frees all the nodes from the linked list
void	ft_lstfree(t_list *stack)
{
	t_list	*temp;

	temp = stack;
	while (temp)
	{
		free(temp);
		temp = temp->next;
	}
}

// Counts how many elements from the start of the linked list until the index
int	ft_distance_to_index(t_list *stack, int index)
{
	int	i;

	i = 0;
	while (stack != NULL && stack->index != index)
	{
		i++;
		stack = stack->next;
	}
	return (i);
}

// Function to sort an array
void	ft_arr_bubble_sort(int *array, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

// Function to find the index
int	ft_put_index(int stack_content, int *array)
{
	int	i;

	i = 0;
	while (array[i] != stack_content)
		i++;
	return (i);
}

// Put every element in a array, sort it, and assign indexes
void	ft_find_index(t_list *stack, int size)
{
	int		i;
	int		*array;
	t_list	*current;

	array = (int *)malloc(size * sizeof(int));
	if (array == NULL)
		return ;
	current = stack;
	i = 0;
	while (i < size)
	{
		array[i] = current->content;
		current = current->next;
		i++;
	}
	current = stack;
	ft_arr_bubble_sort(array, size);
	while (current)
	{
		current->index = ft_put_index(current->content, array);
		current = current->next;
	}
	free(array);
}

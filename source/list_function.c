/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_function.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 01:18:09 by cstoia            #+#    #+#             */
/*   Updated: 2024/05/03 01:45:18 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_a	*ft_newlst(int data)
{
	t_stack_a	*new;

	new = (t_stack_a *)malloc(sizeof(t_stack_a));
	if (new == NULL)
		return (NULL);
	new->data = data;
	new->next = NULL;
	return (new);
}

void	ft_printlst(t_stack_a *head)
{
	while (head != NULL)
	{
		ft_printf("%d\n", head->data);
		head = head->next;
	}
}

t_stack_a	*ft_addlst_back(t_stack_a **node, t_stack_a *new_node)
{
	t_stack_a	*last;

	if (node == NULL || new_node == NULL)
		return (NULL);
	if (*node == NULL)
	{
		*node = new_node;
		return (NULL);
	}
	last = *node;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new_node;
	return (new_node);
}

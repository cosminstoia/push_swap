/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_function.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 01:18:09 by cstoia            #+#    #+#             */
/*   Updated: 2024/05/03 15:39:09 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Function that prints all the nodes in a linked list
void	ft_printlst(t_list *head)
{
	while (head != NULL)
	{
		ft_printf("%d\n", head->content);
		head = head->next;
	}
}

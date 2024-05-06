/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:55:21 by cstoia            #+#    #+#             */
/*   Updated: 2024/05/06 16:55:37 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_three(t_list **stack)
{
	t_list	*max_node;

	max_node = ft_find_max_node(*stack);
	if (max_node == *stack)
		ft_ra(stack);
	else if ((*stack)->next == max_node)
		ft_rra(stack);
	if ((*stack)->content > (*stack)->next->content)
		ft_sa(stack);
}

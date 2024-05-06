/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:08:47 by cstoia            #+#    #+#             */
/*   Updated: 2024/05/07 00:04:57 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc > 2 && argv[1][0])
		ft_check_input_and_add_to_list(argv, &stack_a, 1);
	else if (argc == 2)
		ft_check_input_and_add_to_list(ft_split(argv[1], ' '), &stack_a, 0);
	else if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	if (!ft_check_is_sorted(stack_a))
	{
		if (ft_lstsize(stack_a) == 2)
			ft_sa(&stack_a);
		else if (ft_lstsize(stack_a) == 3)
			ft_sort_three(&stack_a);
		else
			ft_sort_stack(stack_a, stack_b);
	}
	ft_printlst(stack_a);
	return (0);
}

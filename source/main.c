/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:08:47 by cstoia            #+#    #+#             */
/*   Updated: 2024/05/05 00:31:56 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;

	stack_a = NULL;
	if (argc > 2 && argv[1][0])
		ft_check_input_and_add_to_list(argv, stack_a, 1);
	else if (argc == 2)
		ft_check_input_and_add_to_list(ft_split(argv[1], ' '), stack_a, 0);
	else if (argc == 1)
		return (1);
	return (0);
}

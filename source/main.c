/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:08:47 by cstoia            #+#    #+#             */
/*   Updated: 2024/05/03 15:10:18 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		i;
	t_list	*stack_a;

	stack_a = NULL;
	i = 1;
	if (argc > 1 && argv[1][0])
	{
		while (argv[i])
		{
			if (!ft_isdigit(*argv[i]))
			{
				ft_printf("Error\n");
				return (1);
			}
			ft_lstadd_back(&stack_a, ft_lstnew((ft_atoi(argv[i]))));
			i++;
		}
		ft_printlst(stack_a);
	}
	else
		return (1);
	return (0);
}

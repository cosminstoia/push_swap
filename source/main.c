/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:08:47 by cstoia            #+#    #+#             */
/*   Updated: 2024/05/12 20:22:18 by cstoia           ###   ########.fr       */
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

// Error handling function
void	ft_error_output(void)
{
	ft_printf("Error\n");
	exit(EXIT_FAILURE);
}

// Main
int	main(int argc, char **argv)
{
	t_list	*stack_a;

	stack_a = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	else if (argv[1][0] == '\0' || argv[1][0] == ' ')
		ft_error_output();
	else if (argc > 2 && argv[1][0])
		ft_check_input_and_add_to_list(argv, &stack_a, 1);
	else if (argc == 2 && argv[1][0] != ' ')
		ft_check_input_and_add_to_list(ft_split(argv[1], ' '), &stack_a, 0);
	ft_find_index(stack_a);
	ft_printf("Before sort:\n");
	ft_printlst(stack_a);
	ft_sort_stack(stack_a);
	ft_printf("After sort:\n");
	ft_printlst(stack_a);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_checks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 20:08:13 by cstoia            #+#    #+#             */
/*   Updated: 2024/05/16 00:19:49 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Checks for MAX_INT and MIN_INT and for doubles
void	ft_check_int(t_list *stack_a, char *argv)
{
	long	num;
	int		count;

	if (ft_strlen(argv) > 11)
		ft_error_output();
	num = ft_atoi(argv);
	count = 1;
	if (num < -2147483647 || num > 2147483647)
		ft_error_output();
	while (stack_a)
	{
		if (stack_a->content == num)
			count++;
		if (count >= 2)
			ft_error_output();
		stack_a = stack_a->next;
	}
}

// Checks if the list is sorted
int	ft_check_if_sorted(t_list *stack_a)
{
	if (!stack_a)
		return (1);
	while (stack_a->next)
	{
		if (stack_a->content > stack_a->next->content)
			return (0);
		stack_a = stack_a->next;
	}
	return (1);
}

// Checks for each number and if it is valid is added to the list
void	ft_check_input_and_add_to_list(char **argv, t_list **stack_a, int flag)
{
	int	i;
	int	j;

	i = 0;
	if (flag == 1)
		i = 1;
	while (argv[i])
	{
		j = 0;
		if (argv[i][j] == '-' || argv[i][j] == '+')
			j++;
		if (!argv[i][j])
			ft_error_output();
		while (argv[i][j])
		{
			if (!ft_isdigit(argv[i][j]))
				ft_error_output();
			j++;
		}
		ft_check_int(*stack_a, argv[i]);
		ft_lstadd_back(stack_a, ft_lstnew(ft_atoi(argv[i]), 0));
		i++;
	}
}

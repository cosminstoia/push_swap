/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:08:43 by cstoia            #+#    #+#             */
/*   Updated: 2024/05/07 01:15:56 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdlib.h>

void	ft_printlst(t_list *head);

// Functions to check the input and add to the list
void	ft_check_int(t_list *stack_a, char *argv);
void	ft_check_input_and_add_to_list(char **argv, t_list **stack_a, int flag);
int		ft_check_is_sorted(t_list *stack_a);

// Sorting fucntions
void	ft_sort_three(t_list **stack);
void	ft_sort_stack(t_list **stack_a, t_list **stack_b);

// Utils functions for sorting
t_list	*ft_find_max_node(t_list *stack);
t_list	*ft_find_min_node(t_list *stack);
void	ft_find_index(t_list *stack);
void	ft_find_if_above_median(t_list *stack);
int		ft_push_first_2_nodes(t_list **stack_a, t_list **stack_b);

// Functions to move the values
void	ft_swap(t_list **stack);
void	ft_sa(t_list **stack_a);
void	ft_sb(t_list **stack_b);
void	ft_ss(t_list **stack_a, t_list **stack_b);
void	ft_pa(t_list **stack_a, t_list **stack_b);
void	ft_pb(t_list **stack_a, t_list **stack_b);
void	ft_rotate(t_list **stack);
void	ft_ra(t_list **stack_a);
void	ft_rb(t_list **stack_b);
void	ft_rr(t_list **stack_a, t_list **stack_b);
void	ft_reverse_rotate(t_list **stack);
void	ft_rra(t_list **stack_a);
void	ft_rrb(t_list **stack_b);
void	ft_rrr(t_list **stack_a, t_list **stack_b);

// Error handling functions
void	ft_error_output(void);

#endif

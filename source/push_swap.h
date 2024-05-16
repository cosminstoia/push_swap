/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:08:43 by cstoia            #+#    #+#             */
/*   Updated: 2024/05/16 01:43:09 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdlib.h>

// Function to print the linked list
void	ft_printlst(t_list *head);

// Functions to check the input and add to the list
void	ft_check_int(t_list *stack_a, char *argv);
void	ft_check_input_and_add_to_list(char **argv, t_list **stack_a, int flag);
int		ft_check_if_sorted(t_list *stack_a);

// Index related functions
void	ft_find_index(t_list *stack, int size);
int		ft_put_index(int stack_content, int *array);
int		ft_distance_to_index(t_list *stack, int index);

// Sorting fucntions
void	ft_sort_stack(t_list *stack_a);
void	ft_lst_bubble_sort(t_list *stack);
void	ft_arr_bubble_sort(int *array, int size);
void	ft_k_sort_a_to_b(t_list **stack_a, t_list **stack_b, int size);
void	ft_k_sort_b_to_a(t_list **stack_a, t_list **stack_b, int size);

// Functions to move the values
void	ft_push(t_list **stack_a, t_list **stack_b, int x);
void	ft_swap(t_list **stack, int x);
void	ft_rotate(t_list **stack, int x);
void	ft_reverse_rotate(t_list **stack, int x);

// Error handling functions
void	ft_error_output(void);

// Free list function
void	ft_lstfree(t_list *stack);

#endif

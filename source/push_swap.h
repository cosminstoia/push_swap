/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:08:43 by cstoia            #+#    #+#             */
/*   Updated: 2024/05/03 01:42:02 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdlib.h>

typedef struct s_stack_a
{
	int					data;
	struct s_stack_a	*next;
}						t_stack_a;

t_stack_a				*ft_newlst(int data);
void					ft_printlst(t_stack_a *head);
t_stack_a				*ft_addlst_back(t_stack_a **node, t_stack_a *new_node);

#endif
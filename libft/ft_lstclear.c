/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:28:28 by cstoia            #+#    #+#             */
/*   Updated: 2024/05/03 16:35:52 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(int))
{
	t_list	*last;
	t_list	*next;

	last = *lst;
	if (last == NULL || lst == NULL || del == NULL)
		return ;
	while (last != NULL)
	{
		next = last->next;
		del(last->content);
		free(last);
		last = next;
	}
	*lst = NULL;
}

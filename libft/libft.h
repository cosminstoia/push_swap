/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 16:28:05 by cstoia            #+#    #+#             */
/*   Updated: 2024/05/05 00:32:24 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include "./ft_printf/ft_printf.h"
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				content;
	struct s_list	*next;
}					t_list;

size_t				ft_strlen(const char *str);
long				ft_atoi(const char *str);
int					ft_isdigit(int c);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstadd_front(t_list **lst, t_list *new);
void				ft_lstclear(t_list **lst, void (*del)(int));
t_list				*ft_lstlast(t_list *lst);
t_list				*ft_lstnew(int content);
char				*ft_strncpy(char *s1, char *s2, int n);
char				**ft_split(char const *s, char c);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strdup(const char *s1);

#endif

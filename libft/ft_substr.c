/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 00:30:21 by cstoia            #+#    #+#             */
/*   Updated: 2024/05/05 00:30:33 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;

	i = 0;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	else
	{
		if (len > ft_strlen(s))
			len = ft_strlen(s);
		if (len > ft_strlen(s) - start)
			len = ft_strlen(s) - start;
		substr = (char *)malloc((len + 1) * sizeof(char));
		if (substr == NULL)
			return (NULL);
		while (i < len && s[start + i] != '\0')
		{
			substr[i] = s[start + i];
			i++;
		}
		substr[len] = '\0';
	}
	return (substr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmart2 <davmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 10:08:55 by davmart2          #+#    #+#             */
/*   Updated: 2024/01/12 19:24:25 by davmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_sub;
	size_t	s_len;
	size_t	new_len;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len <= start)
		return (ft_strdup(""));
	new_len = s_len - start;
	if (new_len > len)
		new_len = len;
	new_sub = (char *)malloc(sizeof(char) * new_len + 1);
	if (new_sub == NULL)
		return (NULL);
	while (i < new_len)
	{
		new_sub[i] = s[start];
		i++;
		start++;
	}
	new_sub[i] = '\0';
	return (new_sub);
}

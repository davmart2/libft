/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmart2 <davmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:56:52 by davmart2          #+#    #+#             */
/*   Updated: 2023/12/20 14:34:22 by davmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = NULL;
	while (*s && *s != '\0')
	{
		if (*s == (char)c)
		{
			last = s;
		}
		s++;
	}
	if (*s == (char)c)
	{
		return ((char *)s);
	}
	return ((char *)last);
}

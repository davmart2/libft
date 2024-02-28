/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmart2 <davmart2@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 10:25:28 by davmart2          #+#    #+#             */
/*   Updated: 2023/12/28 10:08:33 by davmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n;

	n = 0;
	while (*needle == 0)
		return ((char *)(haystack));
	n = ft_strlen(needle);
	while (*haystack != '\0' && n <= len)
	{
		if (*haystack == *needle && ft_strncmp(haystack, needle, n) == 0)
			return ((char *)(haystack));
		haystack++;
		len--;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmart2 <davmart2@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 13:33:26 by davmart2          #+#    #+#             */
/*   Updated: 2023/12/26 14:59:44 by davmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)str1;
	p2 = (unsigned char *)str2;
	while (n > 0 && (*p1 != '\0' || *p2 != '\0'))
	{
		if (*p1 != *p2)
		{
			return ((*p1) - (*p2));
		}
		p1++;
		p2++;
		n--;
	}
	return (0);
}

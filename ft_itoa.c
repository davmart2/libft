/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmart2 <davmart2@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 18:50:43 by davmart2          #+#    #+#             */
/*   Updated: 2024/01/12 16:27:45 by davmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_nbr(long int nb)
{
	int	count;

	count = 0;
	if (nb == 0)
		count = 1;
	if (nb < 0)
	{
		nb *= -1;
		count++;
	}
	while (nb > 0)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int			i;
	long int	nb;
	char		*str;

	nb = n;
	i = count_nbr(nb);
	str = malloc((i + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[i] = '\0';
	if (nb == 0)
		str[--i] = '0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)
	{
		str[--i] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (str);
}

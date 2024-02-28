/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmart2 <davmart2@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 12:09:15 by davmart2          #+#    #+#             */
/*   Updated: 2023/12/30 12:39:15 by davmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	x;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		x = n * -1;
	}
	else
		x = n;
	if (x > 9)
	{
		ft_putnbr_fd(x / 10, fd);
	}
	ft_putchar_fd(x % 10 + 48, fd);
}

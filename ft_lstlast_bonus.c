/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmart2 <davmart2@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:01:13 by davmart2          #+#    #+#             */
/*   Updated: 2024/01/16 10:09:14 by davmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*p;

	p = lst;
	if (p == NULL || lst == NULL)
		return (NULL);
	if (p->next == NULL)
		return (p);
	while (p != NULL)
	{
		if (p->next == NULL)
			return (p);
		p = p->next;
	}
	return (p);
}

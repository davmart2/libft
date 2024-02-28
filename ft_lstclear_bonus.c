/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmart2 <davmart2@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:44:13 by davmart2          #+#    #+#             */
/*   Updated: 2024/01/17 11:48:22 by davmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*nod;

	while (*lst != NULL)
	{
		nod = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = nod;
	}
	*lst = NULL;
}

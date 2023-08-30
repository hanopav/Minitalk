/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phanosek <phanosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 10:46:11 by phanosek          #+#    #+#             */
/*   Updated: 2023/02/03 10:57:27 by phanosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *i;

	if (new == 0)
		return ;
	if (*lst == 0)
		*lst = new;
	i = ft_lstlast(*lst);
	i->next = new;
}
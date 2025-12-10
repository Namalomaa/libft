/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namaloma <namaloma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 11:13:51 by namaloma          #+#    #+#             */
/*   Updated: 2025/12/10 16:53:23 by namaloma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst)
	{
		*lst = new;
		return ;
	}
	if (!new)
		return ;
	temp = *lst;
	while (temp -> next)
		temp = temp -> next;
	temp -> next = new;
}

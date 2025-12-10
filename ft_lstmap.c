/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namaloma <namaloma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 13:06:25 by namaloma          #+#    #+#             */
/*   Updated: 2025/12/10 17:30:22 by namaloma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*new;
	t_list	*temp;
	void	*data;

	temp = lst;
	newlst = NULL;
	while (temp)
	{
		data = f(temp -> content);
		new = ft_lstnew(data);
		if (!new)
		{
			del (data);
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		ft_lstadd_back(&newlst, new);
		temp = temp -> next;
	}
	return (newlst);
}

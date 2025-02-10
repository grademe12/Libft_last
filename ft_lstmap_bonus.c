/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woospark <woospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 21:47:47 by woosupar          #+#    #+#             */
/*   Updated: 2025/02/10 15:27:31 by woospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_return(t_list *lst)
{
	if (lst == 0)
		return ;
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret_lst;
	t_list	*tmp;
	void	*ptr;

	ft_return(lst);
	ret_lst = 0;
	while (lst != 0)
	{
		ptr = f(lst->content);
		if (ptr == 0)
		{
			ft_lstclear(&ret_lst, del);
			return (0);
		}
		tmp = ft_lstnew(ptr);
		if (tmp == 0)
		{
			ft_lstclear(&ret_lst, del);
			del(ptr);
			return (0);
		}
		ft_lstadd_back(&ret_lst, tmp);
		lst = lst->next;
	}
	return (ret_lst);
}

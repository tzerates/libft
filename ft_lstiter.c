/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzerates <tzerates@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 20:40:31 by tzerates          #+#    #+#             */
/*   Updated: 2020/01/11 10:38:52 by tzerates         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *content;

	content = lst;
	if (!lst || !f)
		return ;
	while (content != NULL)
	{
		lst = content->next;
		(*f)(content->content);
		content = lst;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgan <jgan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/20 21:28:25 by jgan              #+#    #+#             */
/*   Updated: 2015/12/12 16:14:00 by jgan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstsort(t_list **alst, int (*cmp)())
{
	t_list	*i;
	t_list	*j;
	void	*swap;
	size_t	tmp;

	i = *alst;
	while (i)
	{
		j = i->next;
		while (j)
		{
			if ((*cmp)(i->content, j->content) > 0)
			{
				swap = i->content;
				i->content = j->content;
				j->content = swap;
				tmp = i->content_size;
				i->content_size = j->content_size;
				j->content_size = tmp;
			}
			j = j->next;
		}
		i = i->next;
	}
}

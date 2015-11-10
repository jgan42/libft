/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgan <jgan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/10 22:36:58 by jgan              #+#    #+#             */
/*   Updated: 2015/11/10 22:36:59 by jgan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*tmp;

	tmp = (char *)malloc(sizeof(char) * n);
	if (!tmp)
		return (NULL);
	tmp = ft_memcpy(tmp, src, n);
	dest = ft_memcpy(dest, tmp, n);
	free(tmp);
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgan <jgan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/10 22:51:02 by jgan              #+#    #+#             */
/*   Updated: 2015/11/10 22:52:19 by jgan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	int		i;
	char	*tmp;

	tmp = (char *)malloc(sizeof(char) * ft_strlen(dest) + 1);
	i = 0;
	while (src[i])
	{
		tmp[i] = src[i];
		i++;
	}
	i = 0;
	while (tmp[i])
	{
		dest[i] = tmp[i];
		i++;
	}
	dest[i] = '\0';
	free(tmp);
	return (dest);
}

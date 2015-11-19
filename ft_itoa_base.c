/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgan <jgan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/10 22:03:58 by jgan              #+#    #+#             */
/*   Updated: 2015/11/19 16:27:12 by jgan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(int n, const char *base)
{
	char	*s;
	int		i;

	i = ft_strlen(base);
	s = (char *)malloc(sizeof(char) * 2);
	if (!s)
		return (NULL);
	if (n < 0)
	{
		s[0] = '-';
		s[1] = '\0';
		s = ft_strjoin(s, ft_itoa_base(-n, base));
	}
	else if (n >= i)
		s = ft_strjoin(ft_itoa_base(n / i, base), ft_itoa_base(n % i, base));
	else if (n < i && n >= 0)
	{
		s[0] = base[n];
		s[1] = '\0';
	}
	return (s);
}

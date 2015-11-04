#include "libft.h"

static int	nb_line(const char *s, const char *sep)
{
	int		i;
	int		j;
	int		len;

	len = ft_strlen(sep);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (ft_strncmp(s + i, sep, len) == 0)
			i += len;
		if (!s[i])
			break ;
		while (s[i] && ft_strncmp(s + i, sep, len) != 0)
			i++;
		j++;
	}
	return (j);
}

char		**ft_strsplitstr(const char *s, const char *sep)
{
	int		i;
	int		k;
	int		l;
	char	**tab;

	k = 0;
	i = 0;
	tab = (char **)malloc(sizeof(char *) * (nb_line(s, sep) + 1));
	while (s[i])
	{
		while (ft_strncmp(s + i, sep, ft_strlen(sep)) == 0)
			i += ft_strlen(sep);
		if (!s[i])
			break ;
		l = i;
		while (s[i] && ft_strncmp(s + i, sep, ft_strlen(sep)) != 0)
			i++;
		tab[k] = ft_strndup(s + l, i - l);
		k++;
	}
	tab[k] = NULL;
	return (tab);
}

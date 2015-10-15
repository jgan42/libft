#include "libft.h"

static int	nbwords(char const *s, char c)
{
	int		i;
	int		nb;

	i = 0;
	nb = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			nb++;
		while (s[i] != '\0' && s[i] != c)
			i++;
	}
	return (nb);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	tab = (char **)malloc(sizeof(char *) * (nbwords(s, c) + 1));
	if (!tab)
		return (0);
	j = 0;
	k = 0;
	while (s[k] != '\0')
	{
		while (s[k] == c)
			k++;
		i = k;
		while (s[k] != '\0' && s[k] != c)
			k++;
		if (k > i)
		{
			tab[j] = ft_strsub(s, i, k - i);
			j++;
		}
	}
	tab[j] = NULL;
	return (tab);
}

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;

	i = 0;
	while (s1[i])
	{
		if (s1[i] == s2[0])
		{
			j = 1;
			while (s1[i + j] == s2[j] && s2[j] != '\0')
				j++;
			if (s2[j] == '\0')
				return (s2);
		}
		i++;
	}
	return (0);
}
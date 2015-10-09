char	*ft_strcat(char *dest, const char *src)
{
	int		i;
	int		j;

	j = 0;
	while (dest[j])
		j++;
	i = 0;
	while (src[i])
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}
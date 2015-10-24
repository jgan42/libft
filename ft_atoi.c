int		ft_atoi(const char *str)
{
	long	tot;
	long	sign;
	int		i;

	if (!str)
		return (0);
	tot = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
	str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		tot = tot * 10 + str[i] - '0';
		i++;
	}
	return ((int)(tot * sign));
}

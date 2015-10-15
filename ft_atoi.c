int		ft_atoi(const char *str)
{
	int		tot;
	int		sign;
	int		i;

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
		if ((tot == 214748364 && str[i] > '7') || tot > 214748364)
			return (sign > 0 ? 2147483647 : (-2147483647 - 1));
		tot = tot * 10 + str[i] - '0';
		i++;
	}
	return (tot * sign);
}

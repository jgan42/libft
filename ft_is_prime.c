#include <stdio.h>

int	ft_is_prime(int nb)
{
	int i;

	i = 3;
	if (nb < 2)
		return (0);
	while (i <= nb / 2 && i <= 46341)
	{
		if (!(nb % i))
			return (0);
		i += 2;
	}
	return (1);
}

int main(void)
{
	int i;
	int j;

	i = 0;
	j = 2147483647;
	while (i < 5000)
	{
		printf("[%d]", ft_is_prime(j));
		i++;
		j--;
	}
	printf("\n");
	return (0);
}

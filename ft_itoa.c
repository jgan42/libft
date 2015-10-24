#include "libft.h"

char	*ft_itoa(int n)
{
	char	*s;

	if (n == -2147483648)
		return ("-2147483648");
	s = (char *)malloc(sizeof(char) * 2);
	if (!s)
		return (NULL);
	if (n < 0)
	{
		s[0] = '-';
		s[1] = '\0';
		s = ft_strjoin(s, ft_itoa(-n));
	}
	else if (n >= 10)
		s = ft_strjoin(ft_itoa(n / 10), ft_itoa(n % 10));
	else if (n < 10 && n >= 0)
	{
		s[0] = n + '0';
		s[1] = '\0';
	}
	return (s);
}

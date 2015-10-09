#include "libft.h"

char	*ft_itoa(int n)
{
	char	*s;

	s = (char *)malloc(sizeof(char) * 2);
	if (!s || base > 16 || base < 2)
		return (0);
	if (n < 0 && base == 10)
	{
		s[0] = '-';
		s[1] = '\0';
		s = ft_strjoin(s, ft_itoa(-n));
	}
	else if (n >= base)
		s = ft_strjoin(ft_itoa(n / 10), ft_itoa(n % 10));
	else if (n < 10 && n >= 0)
	{
		s[0] = n + '0';
		s[1] = '\0';
	}
	return (s);
}
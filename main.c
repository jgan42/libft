#include "libft.h"
#include <stdio.h>
#include <ctype.h>

char	ftestc(char c)
{
	if (isalpha(c))
		c += (c > 95 ? -32 : 32);
	else if (isdigit(c))
		c = '0';
	return (c);
}

void	ftest(char *c)
{
	if (isalpha(c[0]))
		c[0] += (c[0] > 95 ? -32 : 32);
	else if (isdigit(c[0]))
		c[0] = '0';
}

int	main(int ac, char **av)
{
	char *test;
	char *testmod;

	if (ac == 2 && av[1][0] == '1')
		return (0);
	test = "Pok3Mon* ~";
	printf("------Main de correction Libft42------\n\nNom fonction :\nResultat attendu//Resultat de votre fonction\n");

	printf("\nft_atoi :\n");
	printf("%d//%d\n", atoi("  -123 4lol"), ft_atoi("  -123 4lol"));
	printf("%d//%d\n", atoi("2147483651lol"), ft_atoi("2147483651lol"));
	printf("%d//%d\n", atoi("  +2147483648"), ft_atoi("  +2147483648"));
	printf("%d//%d\n", atoi(" \n \t-2147483649"), ft_atoi(" \n \t-2147483649"));
	printf("0//%d,%d,%d,%d,%d,%d\n", ft_atoi("- +28"), ft_atoi("+-283 6"), ft_atoi("  --0123lol"), ft_atoi("  ++0123lol"), ft_atoi(""), ft_atoi(" a 54"));

	printf("\nft_bzero :\n");
	testmod = strdup(test);
	bzero(testmod, 10);
	printf("%d//", memcmp("\0\0\0\0\0\0\0\0\0*", testmod, 10));
	testmod = strdup(test);
	ft_bzero(testmod, 10);
	printf("%d\n", memcmp("\0\0\0\0\0\0\0\0\0*", testmod, 10));

	printf("\nft_isalnum :\n");
	printf("%d,%d,%d,%d,%d//", isalnum(75), isalnum(110), isalnum(49), isalnum(21), isalnum(94));
	printf("%d,%d,%d,%d,%d\n", ft_isalnum(75), ft_isalnum(110), ft_isalnum(49), ft_isalnum(21), ft_isalnum(94));

	printf("\nft_isalpha :\n");
	printf("%d,%d,%d,%d,%d//", isalpha(75), isalpha(110), isalpha(49), isalpha(21), isalpha(94));
	printf("%d,%d,%d,%d,%d\n", ft_isalpha(75), ft_isalpha(110), ft_isalpha(49), ft_isalpha(21), ft_isalpha(94));

	printf("\nft_isascii :\n");
	printf("%d,%d,%d,%d,%d,%d//", isascii(0), isascii(110), isascii(126), isascii(127), isascii(200), isascii(255));
	printf("%d,%d,%d,%d,%d,%d\n", ft_isascii(0), ft_isascii(110), ft_isascii(126), ft_isascii(127), ft_isascii(200), isascii(255));

	printf("\nft_isdigit :\n");
	printf("%d,%d,%d,%d,%d//", isdigit(48), isdigit(57), isdigit(51), isdigit(47), isdigit(94));
	printf("%d,%d,%d,%d,%d\n", ft_isdigit(48), ft_isdigit(57), ft_isdigit(51), ft_isdigit(47), ft_isdigit(94));

	printf("\nft_isprint :\n");
	printf("%d,%d,%d,%d,%d,%d,%d//", isprint(32), isprint(47), isprint(51), isprint(71), isprint(115), isprint(127), isprint(9));
	printf("%d,%d,%d,%d,%d,%d,%d\n", ft_isprint(32), ft_isprint(47), ft_isprint(51), ft_isprint(71), ft_isprint(115), isprint(127), isprint(9));

	printf("\nft_itoa :\n");
	printf("-546294//%s\n", ft_itoa(-546294));
	printf("0//%s\n", ft_itoa(0));
	printf("101010//%s\n", ft_itoa(101010));

	printf("\nft_memccpy :\n");
	testmod = strdup(test);
	printf("%s|", (char *)memccpy(testmod, "qwertyu", 'L', 7));;
	printf("%s//", testmod);
	testmod = strdup(test);
	printf("%s|", (char *)ft_memccpy(testmod, "qwertyu", 'L', 7));
	printf("%s\n", testmod);
	testmod = strdup(test);
	printf("%s|", (char *)memccpy(testmod, "qwerLtyu", 'L', 7));;
	printf("%s//", testmod);
	testmod = strdup(test);
	printf("%s|", (char *)ft_memccpy(testmod, "qwerLtyu", 'L', 7));
	printf("%s\n", testmod);

	printf("\nft_memchr :\n");
	printf("%s.//", (char *)memchr(test, 'a', 10));;
	printf("%s.\n", (char *)ft_memchr(test, 'a', 10));
	printf("%s//", (char *)memchr(test, 'M', 10));;
	printf("%s\n", (char *)ft_memchr(test, 'M', 10));

	printf("\nft_memcmp :\n");
	testmod = strdup(test);
	printf("%d//", memcmp(test, test, 10));;
	printf("%d\n", ft_memcmp(test, test, 10));
	printf("%d//", memcmp(test, "lol", 4));;
	printf("%d\n", ft_memcmp(test, "lol", 4));

	printf("\nft_memcpy :\n");
	testmod = strdup(test);
	printf("%s//", (char *)memcpy(testmod, "qwertyu", 7));
	testmod = strdup(test);
	printf("%s\n", (char *)ft_memcpy(testmod, "qwertyu", 7));

	printf("\nft_memmove :\n");
	testmod = strdup(test);
	printf("%s|", (char *)memmove(testmod + 3, testmod, 7));;
	printf("%s//", testmod);
	testmod = strdup(test);
	printf("%s|", (char *)ft_memmove(testmod + 3, testmod, 7));
	printf("%s\n", testmod);
	testmod = strdup(test);
	printf("%s|", (char *)memmove(testmod, testmod + 3, 7));
	printf("%s//", testmod);
	testmod = strdup(test);
	printf("%s|", (char *)ft_memmove(testmod, testmod + 3, 7));
	printf("%s\n", testmod);

	printf("\nft_memset :\n");
	testmod = strdup(test);
	memset(testmod, 66, 9);
	printf("'%s'//", testmod);
	testmod = strdup(test);
	ft_memset(testmod, 66, 9);
	printf("'%s'\n", testmod);

	printf("\nft_putchar, ft_putendl, ft_putnbr, ft_putstr :\n");
	ft_putchar('O');
	ft_putendl("k si retour,");
	ft_putnbr(-420420420);
	ft_putstr(" Ca roule !\n");

	printf("\nft_putchar_fd, ft_putendl_fd, ft_putnbr_fd, ft_putstr_fd :\n");
	ft_putchar_fd('O', 1);
	ft_putendl_fd("k si retour,", 1);
	ft_putnbr_fd(-420420420, 1);
	ft_putstr_fd(" Ca roule !\n", 1);

	printf("\nft_strcat :\n");
	testmod = strdup(test);
	strcat(testmod, test);
	printf("%s//", testmod);
	testmod = strdup(test);
	ft_strcat(testmod, test);
	printf("%s\n", testmod);

	printf("\nft_strchr :\n");
	printf("%s.//", strchr(test, 'a'));;
	printf("%s.\n", ft_strchr(test, 'a'));
	printf("%s//", strchr(test, 'M'));;
	printf("%s\n", ft_strchr(test, 'M'));

	printf("\nft_strclr :\n");
	testmod = strdup(test);
	ft_strclr(testmod);
	printf("10752//%d\n", memcmp("\0\0\0\0\0\0\0\0\0*", testmod, 10));

	printf("\nft_strcmp :\n");
	testmod = strdup(test);
	printf("%d//%d\n", strcmp(test, testmod), ft_strcmp(test, testmod));
	printf("%d//%d\n", strcmp(test, "Pok9"), ft_strcmp(test, "Pok9"));

	printf("\nft_strcpy :\n");
	testmod = strdup(test);
	printf("%s//", strcpy(testmod, "qwert"));
	testmod = strdup(test);
	printf("%s\n", ft_strcpy(testmod, "qwert"));
	testmod = strdup(test);
	printf("%s//", strcpy(testmod, "qwertyuiopasd"));
	testmod = strdup(test);
	printf("%s\n", ft_strcpy(testmod, "qwertyuiopasd"));
	testmod = strdup(test);
	printf("%s|", strcpy(testmod + 3, testmod));;
	printf("%s//", testmod);
	testmod = strdup(test);
	printf("%s|", ft_strcpy(testmod + 3, testmod));
	printf("%s\n", testmod);
	testmod = strdup(test);
	printf("%s|", strcpy(testmod, testmod + 3));;
	printf("%s//", testmod);
	testmod = strdup(test);
	printf("%s|", ft_strcpy(testmod, testmod + 3));
	printf("%s\n", testmod);

	printf("\nft_strdup :\n");
	printf("%s//", strdup(test));
	printf("%s\n", ft_strdup(test));

	printf("\nft_strequ :\n");
	testmod = strdup(test);
	printf("1//%d\n", ft_strequ(test, testmod));
	testmod[strlen(test)] = '*';
	printf("0//%d\n", ft_strequ(test, testmod));

	printf("\nft_striter :\n");
	testmod = strdup(test);
	ft_striter(testmod, ftest);
	printf("pOK0mON* ~//%s\n", testmod);

	printf("\nft_strjoin :\n");
	testmod = strdup(test);
	printf("%s%s//", testmod, test);
	printf("%s\n", ft_strjoin(testmod, test));

	printf("\nft_strlen :\n");
	printf("%d//", (int)strlen("poikpoikpoikpoik"));
	printf("%d\n", (int)ft_strlen("poikpoikpoikpoik"));
	printf("%d//", (int)strlen(""));
	printf("%d\n", (int)ft_strlen(""));

	printf("\nft_strmap :\n");
	testmod = strdup(test);
	printf("pOK0mON* ~//%s\n", ft_strmap(testmod, ftestc));
	printf("Pok3Mon* ~//%s\n", testmod);

	printf("\nft_strncat :\n");
	testmod = strdup(test);
	strncat(testmod, test, 4);
	printf("%s//", testmod);
	testmod = strdup(test);
	ft_strncat(testmod, test, 4);
	printf("%s\n", testmod);

	printf("\nft_strncmp :\n");
	testmod = strdup(test);
	printf("%d//%d\n", strncmp(test, testmod, 12), ft_strncmp(test, testmod, 12));
	printf("%d//%d\n", strncmp(test, "Pok9", 3), ft_strncmp(test, "Pok9", 3));
	printf("%d//%d\n", strncmp(test, "Pok9", 4), ft_strncmp(test, "Pok9", 4));

	printf("\nNon testes :\n ft_memalloc, ft_memdel, ft_strdel, ft_striteri, ft_strlcat, ft_strmapi\n");
	printf("\nA verifier :\n ft_strjoin, ft_strdup, ft_strmap\n\n");
	return (0);
}

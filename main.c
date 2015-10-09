#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char *test;
	char *testmod;

	test = "Pok3Mon* ~";
	printf("------Main de correction Libft42------\n\nNom fonction :\nResultat attendu//Resultat de votre fonction\n");

	printf("\nft_atoi :\n");
	printf("%d//%d\n", atoi("  -123 4lol"), ft_atoi("  -123 4lol"));
	printf("%d//%d\n", atoi("2147483651lol"), ft_atoi("2147483651lol"));
	printf("%d//%d\n", atoi("  +2147483648"), ft_atoi("  +2147483648"));
	printf("%d//%d\n", atoi(" \n \t-2147483649"), ft_atoi(" \n \t-2147483649"));
	printf("0//%d,%d,%d,%d,%d\n", ft_atoi("- +28"), ft_atoi("+-283 6"), ft_atoi("  --0123lol"), ft_atoi("  ++0123lol"), ft_atoi(" a 54"));

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
	printf("42424242//%s\n", ft_itoa(42424242));
	printf("101010//%s\n", ft_itoa(101010));

	printf("\nft_memccpy :\n");
	testmod = strdup(test);
	printf("%s|", (char *)memccpy(testmod, "qweMrtyu", 'M', 7));;
	printf("%s//", testmod);
	testmod = strdup(test);
/*	printf("%s\n", (char *)*/ft_memccpy(testmod, "qwertyu", 'M', 7)/*);*/
	printf("%s//", testmod);

	printf("\nft_memset :\n");
	testmod = strdup(test);
	memset(testmod, 66, 9);
	printf("'%s'//", testmod);
	testmod = strdup(test);
	ft_memset(testmod, 66, 9);
	printf("'%s'\n", testmod);

	printf("Non testes :\n ft_memalloc");
	return (0);
}

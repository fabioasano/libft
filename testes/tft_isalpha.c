#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("Teste ft_isalpha.c\n");
	printf("%d :", ft_isalpha('a'));
	printf(" %d\n", isalpha('a'));
	printf("%d :", ft_isalpha('z'));
	printf(" %d\n", isalpha('z'));
	printf("%d :", ft_isalpha('k'));
	printf(" %d\n", isalpha('k'));
	printf("%d :", ft_isalpha('0'));
	printf(" %d\n", isalpha('0'));
	printf("%d :", ft_isalpha('Z'));
	printf(" %d\n", isalpha('Z'));
	printf("%d :", ft_isalpha('A'));
	printf(" %d\n", isalpha('A'));
	printf("%d :", ft_isalpha('K'));
	printf(" %d\n", isalpha('K'));
	printf("%d :", ft_isalpha('!'));
	printf(" %d\n", isalpha('!'));
}

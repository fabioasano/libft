#include <string.h>
#include <stddef.h>

void	ft_bzero(void *s, size_t n);
int	main()
{
	char str[40];

	strcpy(str, "This is my ft_bzero function");
	puts(str);

	ft_bzero(str, 10);
	puts(str);

	return (0);
}

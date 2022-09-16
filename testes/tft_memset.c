#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n);
int	main()
{
	char str[40];

	strcpy(str, "This is my ft_memset function");
	puts(str);

	ft_memset(str, '0', -10);
	puts(str);

	return (0);
}

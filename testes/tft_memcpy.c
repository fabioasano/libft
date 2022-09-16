#include <string.h>
#include <stddef.h>

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n);
int	main()
{
	char dest[13] = "Hello World!";
	char src[6] = "Olaaa";
	puts(src);
	puts(dest);

	ft_memcpy(dest, scr, 4);
	puts(dest);

	return (0);
}

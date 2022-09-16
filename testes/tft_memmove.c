void	*ft_memmove(void *dest, const void *src, size_t n);

int	main()
{
	char dest[13] = "Hello World!";
	char scr[6] = "Olaaa";
	puts(scr);
	puts(dest);

	ft_memmove(dest, scr, 4);
	puts(dest);

	return (0);
}

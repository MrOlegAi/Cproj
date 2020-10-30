//#include <string.h>
//#include <stdio.h>
//#include <unistd.h>
#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char *ptr;
	if (s)
	{
		ptr = s;
		while (n--)
			ptr[n] = c;	
	}
		return (s);
}

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;

	if (s)
	{
		ptr = s;
		while (n--)
			ptr[n] = '\0';
	}
}


int	main()
{
	int	c;
	void	*s;

	c = 5;
	s = &c;
	ft_memset(s, 177, 3);
//	printf("%s\n", s);
//	write(1, s, 3);
	return (0);
}


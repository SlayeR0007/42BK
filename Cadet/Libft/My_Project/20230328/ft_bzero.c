#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*data;

	i = 0;
	data = (char *)s;
	while (i < n)
	{
		data[i] = 0;
		i++;
	}
}

//#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*b_data;
	size_t	i;

	b_data = (char *)b;
	i = 0;
	while (i < len)
	{
		b_data[i] = c;
		i++;
	}
	return (b);
}

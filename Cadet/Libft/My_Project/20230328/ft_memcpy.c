//#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dst_data;
	char	*src_data;
	size_t	i;

	if (!dst && !src)
		return (NULL);
	dst_data = (char *)dst;
	src_data = (char *)src;
	i = 0;
	while (i < n)
	{
		dst_data[i] = src_data[i];
		i++;
	}
	return (dst_data);
}

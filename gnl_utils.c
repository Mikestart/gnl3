#include "get_next_line.h"

char	*ft_substr(char const *s, int start, int len)
{
	char	*dst;
	int		i;

	if (!s)
		return (NULL);
	if ((start >= ft_strlen(s)) || (len == 0))
		return (ft_calloc(1, 1));
	if (len > (ft_strlen(s) - start))
		len = ft_strlen(s) - start;
	dst = malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	i = 0;
	while (s[start] && i < len)
	{
		dst[i] = s[start];
		start++;
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

void	ft_bzero(void *s, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = 0;
		i++;
	}
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;

	if (count == SIZE_MAX && size == SIZE_MAX)
		return (NULL);
	result = malloc (count * size);
	if (!result)
		return (NULL);
	ft_bzero(result, count * size);
	return (result);
}

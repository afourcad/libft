#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void	*mem = 0;

	if ((mem = malloc(sizeof(*mem) * size)) == NULL)
		return (NULL);
	mem[0] = 0;
	return (mem);
}

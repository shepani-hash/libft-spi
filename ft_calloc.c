#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char *str = (unsigned char*)s;
	size_t	i;

	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

void    *ft_calloc(size_t count, size_t size)
{
  size_t  i;
  void    *call;
  
  if (count == 0)
    count = 1;
  if (size == 0)
		size = 1;
	i = count * size;
	call = malloc(i);
	if (call == NULL)
		return (NULL);
	else
		ft_bzero(call, i);
	return (call);
}

// int main() {
//     // Test ft_bzero
//     char buffer[10] = "Hello";
//     printf("Before ft_bzero: '%s'\n", buffer);
//     ft_bzero(buffer, 5);
//     printf("After ft_bzero: '%s'\n", buffer); // Should print empty string
//     int i;
//     i = 0;
//     // Test ft_calloc
//     int *array = (int *)ft_calloc(5, sizeof(int));
//     while (array != NULL && i != 18) {
//         printf("%d", array[i]); // Should print 0
//         i++;
//        // free(array); // Free the allocated memory
//     } 
//     return 0;
// }
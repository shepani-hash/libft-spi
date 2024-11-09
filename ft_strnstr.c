#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;
    char   *haystack1 = (char*)haystack;
    char   *needle1 = (char*)needle;

	i = 0;
	j = 0;
	if (needle1[i] == '\0')
		return (haystack1);
	while (haystack1[i] != '\0' && i < len - 1)
	{
		while (haystack1[i + j] != '\0' && haystack1[i + j] == needle1[j])
			j++;
		if (needle1[j] == '\0')
			return (haystack1 + i);
		i++;
		j = 0;
	}
	return (NULL); // u need to understood more and the size_t "problem"
}
#include <string.h>
int main(void)
{
   char *string1 = "a haystack needle";
   char *string2 = "haystack";
   char *result;
 
  result = ft_strnstr(string1,string2, -1);
     /* Result = a pointer to "haystack" */
  printf("%s\n", result);
}
 


#include "libft.h"
int	ft_strlen(const char	*s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
char    *ft_strrchr(const char *s, int c)
{
    char    *str = (char*)s;
    int str_len;

    str_len = ft_strlen(str);
    while (str[str_len-1])
    {
        if (c == str[str_len])
            return (&str[str_len]);
        str_len--;
    }
    str = NULL;
    return (str); // i need to return null like this '(null)' "slove"
}
#include <string.h>
int main(void)
{
  char buffer1[17] = "coputer program";
  char * ptr;
  int    ch = 'o';
 
  ptr = ft_strrchr( buffer1, ch );
  printf( "The first occurrence of %c in '%s' is '%s'\n",ch, buffer1, ptr );
  char buffer2[17] = "coputer program";
  char * ptr2;
  ptr2 = strrchr( buffer2, ch );
  printf( "The first occurrence of %c in '%s' is '%s'\n",ch, buffer2, ptr2 );
}
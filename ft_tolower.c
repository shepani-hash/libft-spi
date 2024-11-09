int ft_toupper(int c)
{
    if (c > 64 && c < 91)
        return(c+=32);
    return (c);
}
#include <stdio.h>
int main()
{
    int a;

    a = 'C';
    printf("%c\n", toupper(90));
}
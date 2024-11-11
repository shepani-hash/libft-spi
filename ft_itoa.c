/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhchiban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 13:26:44 by lhchiban          #+#    #+#             */
/*   Updated: 2024/10/25 19:23:19 by lhchiban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_itoa(int n)
{
    int sign;
    int i;
    int n1;
    char *t;

    n1 = n;
    i = 0;
    if (n < 0)
    {
        n *= -1;
        sign = 1;
        i++;
    }
    while (n1 != 0)
    {
        n1 /= 10;
        i++;
    }
    n1 = i;
    t = malloc(i+1);
    if (!t)
        return (NULL);
    i = n1 - 1;
    while (i >= 0)
    {
        if (sign == 1)
        {
            t[i--] = (n % 10) + '0';
            t[0] = '-';
        }
        else if (sign != 1)
            t[i--] = (n % 10) + '0';
        n /= 10;
    }
    t[n1] = '\0';
    return (t);
}

// int main()
// {
//     int i;
//     i = 123;
//     printf("%s", ft_itoa(-1203));

// }
// handell this

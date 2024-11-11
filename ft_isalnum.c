/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhchiban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 20:32:51 by lhchiban          #+#    #+#             */
/*   Updated: 2024/10/25 22:35:47 by lhchiban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c < 65 || c > 90) && (c < 97 || c > 127) && (c < 48 || c > 57))
		return (0);
	return (1);
}
// int main()
// {
// 	printf("%d", ft_isalum(1));
// 	printf("%d", ft_isalum('1'));
// 	printf("%d", ft_isalum('9'));
// 	printf("%d", ft_isalum('a'));
// 	printf("%d", ft_isalum('z'));
// 	printf("%d", ft_isalum('Z'));
// 	printf("%d", ft_isalum(47));
// 	printf("%d", ft_isalum(58));
// 	printf("%d", ft_isalum('\0'));
//     return 0;
// }

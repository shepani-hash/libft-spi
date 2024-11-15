/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhchiban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 11:28:55 by lhchiban          #+#    #+#             */
/*   Updated: 2024/10/26 11:39:35 by lhchiban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isprint(int c)
{
	if (c < 32 || c > 126)
		return (0);
	return (1);
}

// int main()
// {
// 	int a;
// 	a = -1;
// 	while (a <= 128)
// 	{
// 	//	printf("%d %d\n", isprint(a), a);
// 		a++;
// 	}
// }

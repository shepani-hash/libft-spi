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
#include <unistd.h>
int	ft_isprint(int c)
{
	write(1, &c, 1);
	write(1, " ", 1);
	if (c < 32 || c > 126)
		return (0);
	return (1);
}
#include <stdio.h>
int main()
{
	int a;
	a = -1;
	while (a <= 128)
	{
		printf("%d %d\n", isprint(a), a);
		a++;
	}
}

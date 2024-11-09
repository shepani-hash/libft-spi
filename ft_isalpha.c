/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhchiban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:27:04 by lhchiban          #+#    #+#             */
/*   Updated: 2024/10/22 11:38:19 by lhchiban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isalpha(int c)
{
	if ((c < 65 || c > 90) && (c < 97 || c > 122))
		return (0);
	return (1);
}
#include <stdio.h>
int main()
{
	char c;
	c = 'q';
	printf("%d", ft_isalpha(1));
	printf("%d", ft_isalpha('z'));
	printf("%d", ft_isalpha('Z'));
	printf("%d", ft_isalpha('A'));
}

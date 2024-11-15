/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhchiban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 13:26:44 by lhchiban          #+#    #+#             */
/*   Updated: 2024/10/25 19:23:19 by lhchiban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char	*str)
{
	size_t	i;
	int		sign;
	size_t	r_v;

	i = 0;
	sign = 1;
	r_v = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i])
	{
		r_v = r_v * 10 + (str[i] - 48);
		i++;
	}
	return (r_v * sign);
}

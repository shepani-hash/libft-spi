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

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}

// int main()
// {
// 	printf("%d", ft_isdigit(1));
// 	printf("%d", ft_isdigit(1));
// 	printf("%d", ft_isdigit('9'));
// 	printf("%d", ft_isdigit(2));
// 	printf("%d", ft_isdigit('e'));
// }


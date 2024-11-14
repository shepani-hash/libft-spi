/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhchiban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:19:45 by lhchiban          #+#    #+#             */
/*   Updated: 2024/11/11 14:31:04 by lhchiban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	count_w(const char *s, char sep)
{
	int	c_w;
	int	in_sep;

	in_sep = 0;
	c_w = 0;
	while (*s)
	{
		if (*s != sep && in_sep == 0)
		{
			in_sep = 1;
			c_w++;
		}
		else if (*s == sep)
			in_sep = 0;
		s++;
	}
	return (c_w);
}

static	void	check_4_free(char	**holder, int wc)
{
	while (wc--)
	{
		free(holder[wc]);
		holder[wc] = NULL;
	}
	free(holder);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		sep_end;
	int		w_c;
	char	**holder;

	i = -1;
	sep_end = 0;
	w_c = count_w(s, c);
	holder = (char **)malloc((w_c + 1) * sizeof(char *));
	if (!holder)
		return (NULL);
	w_c = 0;
	while (s[++i])
	{
		if (s[i] == c)
		{
			if (i > sep_end)
			{
				holder[w_c++] = ft_substr(s, sep_end, i - sep_end);
				if (!holder[w_c - 1])
					return (check_4_free(holder, w_c), NULL);
			}
			sep_end = i + 1;
		}
	}
	if (i > sep_end)
		holder[w_c++] = ft_substr(s, sep_end, i - sep_end);
	holder[w_c] = NULL;
	return (holder);
}
// int main()
// {
//     char *str = ",,,,hello,y,world,y,are,y,you,y,ok,";
//     int i = 0;
//     char    **arr = ft_split(str, ',');
//    while (arr && arr[i])
//    {
//         printf("%s\n",arr[i]);
//         i++;
//    }
// }
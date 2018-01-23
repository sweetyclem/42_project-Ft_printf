/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 16:18:19 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/23 14:56:55 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static char	**encode(char *bin, char *m)
{
	int		j;
	int		i;
	char	*mask;
	char	**split;

	mask = ft_strdup(m);
	i = ft_strlen(mask) - 1;
	j = ft_strlen(bin) - 1;
	while (i >= 0 && j >= 0)
	{
		if (mask[i] == 'x')
		{
			mask[i] = bin[j];
			j--;
		}
		i--;
	}
	i = 0;
	while (i < (int)ft_strlen(mask))
	{
		if (mask[i] == 'x')
			mask[i] = '0';
		i++;
	}
	split = ft_strsplit(mask, ' ');
	free(mask);
	return (split);
}

int			ft_putwchar(wchar_t c)
{
	char	*bin;
	char	**mask;
	int		i;

	i = 0;
	bin = ft_itoa_longlong_base((int)c, 2);
	if (ft_strlen(bin) <= 7)
		mask = encode(bin, "0xxxxxxx");
	else if (ft_strlen(bin) <= 11)
		mask = encode(bin, "110xxxxx 10xxxxxx");
	else if (ft_strlen(bin) <= 16)
		mask = encode(bin, "1110xxxx 10xxxxxx 10xxxxxx");
	else
		mask = encode(bin, "11110xxx 10xxxxxx 10xxxxxx 10xxxxxx");
	ft_strdel(&bin);
	while (mask[i])
	{
		ft_putchar(ft_atoi_base(mask[i], 2));
		ft_strdel(&mask[i]);
		i++;
	}
	free(mask);
	return (i);
}

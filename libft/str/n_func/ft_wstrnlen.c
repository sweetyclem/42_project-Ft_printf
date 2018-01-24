/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrnlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 08:33:38 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/24 08:45:09 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int	ft_wstrnlen(wchar_t *str, int n)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i] != '\0' && n > 0)
	{
		if (str[i] <= 127)
			len += 1;
		else if (str[i] <= 2047)
			len += 2;
		else if (str[i] <= 65535)
			len += 3;
		else
			len += 4;
		i++;
		n--;
	}
	return (len - 2);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 16:18:19 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/22 16:50:35 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

#define WCHAR_MASK_1 "0xxxxxxx"
#define WCHAR_MASK_2 "110xxxxx 10xxxxxx"
#define WCHAR_MASK_3 "1110xxxx 10xxxxxx 10xxxxxx"
#define WCHAR_MASK_4 "11110xxx 10xxxxxx 10xxxxxx 10xxxxxx"

static char	**apply_mask(char *bin, char *m)
{
	
}

int	ft_putwchar(wchar_t c)
{

}

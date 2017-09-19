/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mo0ky <mo0ky@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 23:30:58 by mo0ky             #+#    #+#             */
/*   Updated: 2017/09/15 23:52:48 by mo0ky            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <wchars.h>

int		ft_wstrlen(wchar_t *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i += ft_wcharlen(*str);
		++str;
	}
	return (i);
}

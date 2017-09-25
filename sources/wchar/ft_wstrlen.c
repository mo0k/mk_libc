/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mo0ky <mo0ky@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 23:30:58 by mo0ky             #+#    #+#             */
/*   Updated: 2017/09/21 12:48:08 by mo0ky            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <wchars.h>
//valeur engatif si non complet
int		ft_wstrlen(wchar_t *str)
{
	int	wstrlen;
	int wcharlen;

	wstrlen = 0;
	while (*str)
	{
		if (!(wcharlen = ft_wcharlen(*str)))
		{
			//printf("return wstrlen:%d\n", wstrlen * -1);
			return (wstrlen * -1);
		}
		wstrlen += wcharlen; 
		//printf("wcharlen:%d\twstrlen%d\n", wcharlen, wstrlen);
		++str;
	}
	return ((!wstrlen)) ? 1 : wstrlen; 
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoucade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 16:35:54 by jmoucade          #+#    #+#             */
/*   Updated: 2016/11/20 06:58:45 by jmoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	len_dest;
	unsigned int	len_src;

	count = 0;
	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (size == len_dest || size == len_dest + 1)
		return (len_dest + len_src);
	else if (size < len_dest)
		return (len_src + size);
	else
	{
		while (len_dest < size + 1 && count < size - len_dest - 1)
		{
			dest[len_dest + count] = src[count];
			count++;
		}
		dest[len_dest + count] = '\0';
		return (len_dest + len_src);
	}
}
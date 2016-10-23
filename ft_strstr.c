/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoucade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 07:01:02 by jmoucade          #+#    #+#             */
/*   Updated: 2016/08/15 16:16:31 by jmoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;

	i = -1;
	while (s1[++i] || !*s2)
	{
		j = 0;
		while (s1[i + j] == s2[j] && s1[i + j])
		{
			j++;
		}
		if (!s2[j])
			return ((char *)s1 + i);
	}
	return (NULL);
}

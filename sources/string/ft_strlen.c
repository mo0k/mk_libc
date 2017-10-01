/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoucade <jmoucade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 14:41:38 by jmoucade          #+#    #+#             */
/*   Updated: 2017/10/01 20:35:33 by jmoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlen(const char *str)
{
	char	*cur;

	cur = (char *)str;
	while (1)
	{
		if (!*(cur++))
			break ;
		if (!*(cur++))
			break ;
		if (!*(cur++))
			break ;
		if (!*(cur++))
			break ;
		if (!*(cur++))
			break ;
		if (!*(cur++))
			break ;
		if (!*(cur++))
			break ;
		if (!*(cur++))
			break ;
	}
	return (cur - str - 1);
}

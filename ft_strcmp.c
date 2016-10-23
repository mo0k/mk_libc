/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoucade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 16:19:06 by jmoucade          #+#    #+#             */
/*   Updated: 2016/08/15 17:45:44 by jmoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
	int	ct;

	ct = 0;
	while (s1[ct] || s2[ct])
	{
		if (s1[ct] < s2[ct] || s1[ct] > s2[ct])
			return ((unsigned char)s1[ct] - (unsigned char)s2[ct]);
		ct++;
	}
	return ((unsigned char)s1[ct] - (unsigned char)s2[ct]);
}

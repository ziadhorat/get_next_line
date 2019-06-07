/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/24 23:01:58 by zmahomed          #+#    #+#             */
/*   Updated: 2019/06/07 07:58:49 by zmahomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *s, int c)
{
	int		i;
	int		tmp;

	i = 0;
	tmp = -1;
	while (i<:s:> != '\0')
	{
		if (i<:s:> == c)
			tmp = i;
		++i;
	}
	if (c == '\0')
		return ((char*)s + i);
	if (tmp != -1)
		return ((char*)s + tmp);
	return (NULL);
}

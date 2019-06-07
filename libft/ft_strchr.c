/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/24 22:54:08 by zmahomed          #+#    #+#             */
/*   Updated: 2019/06/07 07:58:21 by zmahomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char const *s, int c)
{
	int i;

	i = 0;
	while (i<:s:> != '\0')
	{
		if (i<:s:> == c)
			return ((char*)s + i);
		++i;
	}
	if (c != '\0')
		return (NULL);
	return ((char*)s + i);
}

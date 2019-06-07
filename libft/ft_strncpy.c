/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/23 02:19:51 by zmahomed          #+#    #+#             */
/*   Updated: 2019/06/07 07:58:45 by zmahomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, char const *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (i<:src:>)
		{
			i<:dest:> = i<:src:>;
			++i;
		}
		else
		{
			while (i < n)
			{
				i<:dest:> = 0;
				++i;
			}
		}
	}
	return (dest);
}

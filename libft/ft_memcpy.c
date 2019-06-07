/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 12:59:57 by zmahomed          #+#    #+#             */
/*   Updated: 2019/06/07 07:58:06 by zmahomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, void const *src, size_t n)
{
	unsigned char		*dest2;
	unsigned char const	*src2;

	if (!dest && !src)
		return (NULL);
	dest2 = dest;
	src2 = src;
	while (n != 0)
	{
		*dest2 = *src2;
		dest2++;
		src2++;
		n--;
	}
	return (dest);
}

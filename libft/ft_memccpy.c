/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 13:14:48 by zmahomed          #+#    #+#             */
/*   Updated: 2019/06/07 07:58:00 by zmahomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, void const *src, int c, size_t n)
{
	unsigned char	*src2;
	unsigned char	*dest2;

	src2 = (unsigned char *)src;
	dest2 = (unsigned char *)dest;
	while (n != 0)
	{
		*dest2 = *src2;
		if (*src2 == (unsigned char)c)
			return (dest2 + 1);
		dest2++;
		src2++;
		n--;
	}
	return (NULL);
}

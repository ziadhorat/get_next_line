/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 13:54:45 by zmahomed          #+#    #+#             */
/*   Updated: 2019/06/07 07:58:11 by zmahomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void const *src, size_t n)
{
	unsigned int	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	if (((unsigned char *)src) < ((unsigned char *)dest))
		while (n-- > 0)
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
	else
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i += 1;
		}
	return (((unsigned char *)dest));
}

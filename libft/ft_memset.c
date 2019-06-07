/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 12:29:11 by zmahomed          #+#    #+#             */
/*   Updated: 2019/06/07 07:58:12 by zmahomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *str;

	if (n == 0)
		return (s);
	str = (unsigned char *)s;
	while (n != 0)
	{
		*str = (unsigned char)c;
		n--;
		str++;
	}
	return (s);
}

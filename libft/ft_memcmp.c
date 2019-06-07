/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 20:13:18 by zmahomed          #+#    #+#             */
/*   Updated: 2019/06/07 07:58:05 by zmahomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(void const *str1, void const *str2, size_t n)
{
	const unsigned char *s1;
	const unsigned char *s2;

	s1 = (const unsigned char *)str1;
	s2 = (const unsigned char *)str2;
	while (n--)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

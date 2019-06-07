/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 17:51:10 by zmahomed          #+#    #+#             */
/*   Updated: 2019/06/07 07:58:23 by zmahomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(char const *s1, char const *s2)
{
	unsigned char	*str1;
	unsigned char	*str2;
	int				i;

	i = 0;
	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	while (i<:str1:> || i<:str2:>)
	{
		if (i<:str1:> != i<:str2:>)
			return (i<:str1:> - i<:str2:>);
		++i;
	}
	return (0);
}

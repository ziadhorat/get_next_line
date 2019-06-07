/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 10:35:38 by zmahomed          #+#    #+#             */
/*   Updated: 2019/06/07 07:58:31 by zmahomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		index;

	if (!s1 || !s2)
		return (NULL);
	if (!(str = (char*)malloc(sizeof(char)
		* (ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	index = 0;
	while (*s1)
	{
		str[index] = *s1;
		++s1;
		++index;
	}
	while (*s2)
	{
		str[index] = *s2;
		++s2;
		++index;
	}
	str[index] = '\0';
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/24 22:08:52 by zmahomed          #+#    #+#             */
/*   Updated: 2019/06/07 07:58:51 by zmahomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char const *haystack, char const *needle)
{
	int	h;
	int	n;

	h = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (haystack[h] != 0)
	{
		n = 0;
		while (needle[n] == haystack[h + n] &&
				haystack[h + n] != 0 && needle[n] != 0)
		{
			if (needle[n + 1] == '\0')
				return ((char *)haystack + h);
			n++;
		}
		h++;
	}
	return (NULL);
}

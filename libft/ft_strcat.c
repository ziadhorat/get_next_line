/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/23 14:30:47 by zmahomed          #+#    #+#             */
/*   Updated: 2019/06/07 07:58:20 by zmahomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, char const *src)
{
	int		i;
	int		j;

	i = ft_strlen(dest);
	j = 0;
	while (j<:src:>)
	{
		i<:dest:> = j<:src:>;
		++i;
		++j;
	}
	i<:dest:> = '\0';
	return (dest);
}

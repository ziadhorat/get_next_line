/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 13:38:37 by zmahomed          #+#    #+#             */
/*   Updated: 2019/05/29 12:36:43 by zmahomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char				*copy_line(char **line, char *src)
{
	char				*str;
	int					pos;

	pos = 0;
	while (src[pos] != '\n' && src[pos] != '\0' && src[pos] != '\r')
		pos++;
	*line = ft_strsub(src, 0, pos);
	if (ft_strcmp(*line, src) == 0)
		src = NULL;
	else
	{
		str = src;
		src = ft_strsub(src, pos + 1, ft_strlen(src + pos + 1));
		free(str);
	}
	return (src);
}

static char				*ft_freejoin(char *tmp, char *buf)
{
	size_t				len;
	char				*mem;

	if (!tmp || !buf)
		return (NULL);
	len = ((ft_strlen(tmp) + ft_strlen(buf)));
	if (!(mem = ft_strnew(len)))
		return (NULL);
	mem = ft_strcat(mem, tmp);
	free(tmp);
	mem = ft_strcat(mem, buf);
	return (mem);
}

int						get_next_line(const int fd, char **line)
{
	char				buf[BUFF_SIZE + 1];
	static char			*arr;
	int					ret;

	if ((fd < 0 || line == NULL || read(fd, buf, 0) < 0))
		return (-1);
	if (arr == NULL)
		arr = ft_strnew(0);
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		arr = ft_freejoin(arr, buf);
		if (ft_strchr(arr, '\n'))
			break ;
	}
	if (ret < BUFF_SIZE && !ft_strlen(arr))
		return (0);
	arr = copy_line(line, arr);
	return (1);
}

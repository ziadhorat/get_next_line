/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 13:38:37 by zmahomed          #+#    #+#             */
/*   Updated: 2019/05/31 09:58:27 by zmahomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char		*join_free(char *arr, char *buf)
{
	size_t				len;
	char				*arr2;

	if (!arr || !buf)
		return (NULL);
	len = ((ft_strlen(arr) + ft_strlen(buf)));
	if (!(arr2 = ft_strnew(len)))
		return (NULL);
	arr2 = ft_strcat(arr2, arr);
	free(arr);
	arr2 = ft_strcat(arr2, buf);
	return (arr2);
}

static char		*return_line(char **line, char *arr)
{
	char				*to_free;
	int					i;

	i = 0;
	while (arr[i] != '\n' && arr[i] != '\0' && arr[i] != '\r')
		i++;
	*line = ft_strsub(arr, 0, i);
	if (ft_strcmp(*line, arr) == 0)
		arr = NULL;
	else
	{
		to_free = arr;
		arr = ft_strsub(arr, i + 1, ft_strlen(arr + i + 1));
		free(to_free);
	}
	return (arr);
}

int				get_next_line(const int fd, char **line)
{
	char				buf[BUFF_SIZE + 1];
	static char			*arr;
	int					ret;

	if (fd < 0 || line == NULL || read(fd, buf, 0) < 0)
		return (-1);
	if (arr == NULL)
		arr = ft_strnew(0);
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		arr = join_free(arr, buf);
		if (ft_strchr(arr, '\n'))
			break ;
	}
	if (ret < BUFF_SIZE && !ft_strlen(arr))
		return (0);
	arr = return_line(line, arr);
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaidali <abaidali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 14:28:16 by abaidali          #+#    #+#             */
/*   Updated: 2019/11/22 14:29:35 by abaidali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_update(char *s, char *sbuf)
{
	if (s != NULL && s[0] != '0')
		free(s);
	s = sbuf;
	return (s);
}

int		ft_get_line(char **s, char **line)
{
	int			len;

	len = 0;
	while ((*s)[len] != '\n' && (*s)[len] != '\0')
		len++;
	if ((*s)[len] == '\n')
	{
		*line = ft_strsub(*s, 0, len);
		*s = ft_update(*s, ft_strdup(&((*s)[len + 1])));
		if ((*s)[0] == '\0')
			ft_strdel(s);
	}
	else
	{
		*line = ft_strdup(*s);
		ft_strdel(s);
	}
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	int				status;
	static char		*s[MAX_FD];
	char			buf[BUFF_SIZE + 1];

	if (fd < 0 || line == NULL || fd > MAX_FD)
		return (-1);
	while ((status = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[status] = '\0';
		if (s[fd] == NULL)
			s[fd] = ft_strdup(buf);
		else
			s[fd] = ft_update(s[fd], ft_strjoin(s[fd], buf));
		if (ft_strchr(s[fd], '\n'))
			break ;
	}
	if (status < 0)
		return (-1);
	else if (status == 0 && !(s[fd]))
		return (0);
	return (ft_get_line(&s[fd], line));
}

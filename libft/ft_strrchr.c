/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaidali <abaidali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 13:52:11 by abaidali          #+#    #+#             */
/*   Updated: 2019/08/24 19:55:10 by abaidali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	int pos;
	int i;

	pos = -1;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			pos = i;
		i++;
	}
	if (s[i] == c)
		return (char*)s + i;
	if (pos != -1)
		return (char *)s + pos;
	return (NULL);
}

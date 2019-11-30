/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaidali <abaidali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 16:37:36 by abaidali          #+#    #+#             */
/*   Updated: 2019/08/24 19:35:57 by abaidali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;

	if (s == 0)
		return (0);
	i = 0;
	dst = malloc(len + 1);
	if (dst == 0)
		return (0);
	while (i < len && s[i + start])
	{
		dst[i] = s[i + start];
		i++;
	}
	while (i < len + 1)
		dst[i++] = '\0';
	return (dst);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaidali <abaidali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 19:01:23 by abaidali          #+#    #+#             */
/*   Updated: 2019/08/24 19:55:05 by abaidali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hstack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	if (len == 0 && ft_strlen(needle) > 0)
		return (NULL);
	else if (len == 0 && ft_strlen(needle) == 0)
		return (char*)hstack;
	i = 0;
	while (hstack[i] && i < len)
	{
		j = 0;
		while (hstack[i + j] && hstack[i + j] == needle[j] && i + j < len)
			j++;
		if (needle[j] == 0)
			return ((char*)hstack + i);
		i++;
	}
	return (NULL);
}

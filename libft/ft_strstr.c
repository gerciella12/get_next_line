/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaidali <abaidali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 15:52:00 by abaidali          #+#    #+#             */
/*   Updated: 2019/08/24 18:59:20 by abaidali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *hstack, const char *needle)
{
	size_t j;
	size_t i;

	i = 0;
	while (hstack[i])
	{
		j = 0;
		while (hstack[i + j] && hstack[i + j] == needle[j])
			j++;
		if (needle[j] == 0)
			return ((char*)hstack + i);
		i++;
	}
	if (*hstack == 0 && *needle == 0)
		return (char*)hstack;
	return (NULL);
}

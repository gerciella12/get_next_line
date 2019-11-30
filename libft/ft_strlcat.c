/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaidali <abaidali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 13:52:11 by abaidali          #+#    #+#             */
/*   Updated: 2019/08/22 15:25:26 by abaidali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t current_len;
	size_t src_len;
	size_t i;

	src_len = 0;
	current_len = 0;
	while (dst[current_len] && current_len < dstsize)
		current_len++;
	while (src[src_len])
		src_len++;
	i = 0;
	while (i < src_len && current_len + i + 1 < dstsize)
	{
		dst[current_len + i] = src[i];
		i++;
	}
	while (current_len + i < dstsize)
	{
		dst[current_len + i] = '\0';
		i++;
	}
	return (current_len + src_len);
}

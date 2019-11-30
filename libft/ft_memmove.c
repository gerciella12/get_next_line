/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaidali <abaidali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 13:52:11 by abaidali          #+#    #+#             */
/*   Updated: 2019/08/24 19:53:29 by abaidali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *dst2;
	unsigned char *src2;

	if (dst == 0 && src == 0)
		return (0);
	dst2 = (unsigned char*)dst;
	src2 = (unsigned char*)src;
	if (dst >= src)
		while (len--)
			dst2[len] = src2[len];
	else
		while (len--)
		{
			*dst2 = *src2;
			src2++;
			dst2++;
		}
	return (dst);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaidali <abaidali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 16:40:48 by abaidali          #+#    #+#             */
/*   Updated: 2019/08/24 19:47:35 by abaidali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	num_len(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	size_t	len;
	size_t	i;
	char	*dest;

	len = num_len(n);
	if (n < 0)
		len++;
	dest = malloc(len + 1);
	if (dest == 0)
		return (0);
	dest[len] = '\0';
	if (n == 0)
		dest[0] = '0';
	if (n < 0)
		dest[0] = '-';
	i = 0;
	while (n != 0)
	{
		if (n < 0)
			dest[len - i++ - 1] = '0' + n % 10 * -1;
		else
			dest[len - i++ - 1] = '0' + n % 10;
		n /= 10;
	}
	return (dest);
}

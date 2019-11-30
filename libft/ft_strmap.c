/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaidali <abaidali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 19:35:25 by abaidali          #+#    #+#             */
/*   Updated: 2019/08/24 19:54:38 by abaidali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	len;
	char	*dest;

	if (s == 0)
		return (0);
	len = 0;
	while (s[len])
		len++;
	dest = malloc(len + 1);
	if (dest == 0)
		return (0);
	len = 0;
	while (s[len])
	{
		dest[len] = f(s[len]);
		len++;
	}
	dest[len] = 0;
	return (dest);
}

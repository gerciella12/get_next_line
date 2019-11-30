/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaidali <abaidali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 13:52:11 by abaidali          #+#    #+#             */
/*   Updated: 2019/08/24 19:54:51 by abaidali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char *result;

	result = s1;
	while (*s1)
		s1++;
	while (*s2 && n)
	{
		*(s1++) = *(s2++);
		n--;
	}
	*s1 = '\0';
	return (result);
}

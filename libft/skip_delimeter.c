/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skip_delimeter.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaidali <abaidali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 17:48:11 by abaidali          #+#    #+#             */
/*   Updated: 2019/08/26 17:57:17 by abaidali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	skip_delimeter(const char *s, char c)
{
	size_t len;

	len = 0;
	while (s[len] == c)
		len++;
	return (len);
}

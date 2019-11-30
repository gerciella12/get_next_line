/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaidali <abaidali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 19:38:24 by abaidali          #+#    #+#             */
/*   Updated: 2019/08/26 17:51:15 by abaidali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	size_t i;
	size_t left;
	size_t right;

	if (s == 0)
		return (0);
	left = 0;
	while (s[left] > 0 && s[left] < 33)
		left++;
	right = 0;
	i = 0;
	while (s[left + i])
	{
		if (s[left + i] > 0 && s[left + i] < 33)
			right++;
		else
			right = 0;
		i++;
	}
	return (copy_word(s + left, i - right));
}

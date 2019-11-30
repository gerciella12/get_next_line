/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaidali <abaidali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 15:51:11 by abaidali          #+#    #+#             */
/*   Updated: 2019/08/26 17:55:43 by abaidali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_strsplit(char const *s, char c)
{
	size_t	count;
	char	**result;
	size_t	len;
	size_t	i;
	size_t	word;

	if (s == 0)
		return (0);
	count = count_sigments(s, c);
	result = malloc(sizeof(char*) * (count + 1));
	if (result == 0)
		return (0);
	i = 0;
	word = 0;
	while (word < count)
	{
		i += skip_delimeter(s + i, c);
		len = word_len(s + i, c);
		result[word++] = copy_word(s + i, len);
		i += len;
	}
	result[word] = 0;
	return (result);
}

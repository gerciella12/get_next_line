/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaidali <abaidali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 15:36:57 by abaidali          #+#    #+#             */
/*   Updated: 2019/08/24 19:58:13 by abaidali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	int		sign;
	char	ch;

	sign = 1;
	if (n < 0)
		sign = -1;
	if (n < 0)
		write(1, "-", 1);
	if (n / 10 != 0)
		ft_putnbr(n / 10 * sign);
	ch = '0' + (char)((n % 10) * sign);
	write(1, &ch, 1);
}

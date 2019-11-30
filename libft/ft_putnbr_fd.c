/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaidali <abaidali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 19:04:11 by abaidali          #+#    #+#             */
/*   Updated: 2019/08/24 19:35:13 by abaidali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		sign;
	char	ch;

	sign = 1;
	if (n < 0)
		sign = -1;
	if (n < 0)
		write(fd, "-", 1);
	if (n / 10 != 0)
		ft_putnbr_fd(n / 10 * sign, fd);
	ch = '0' + (char)((n % 10) * sign);
	write(fd, &ch, 1);
}

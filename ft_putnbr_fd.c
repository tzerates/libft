/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzerates <tzerates@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 15:29:01 by tzerates          #+#    #+#             */
/*   Updated: 2020/01/09 16:22:52 by tzerates         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	long int nbr;
	long int mod;
	long int div;

	nbr = nb;
	if (nb == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	else
	{
		if (nbr < 0)
		{
			ft_putchar_fd('-', fd);
			nbr = nbr * -1;
		}
		div = nbr / 10;
		mod = nbr % 10;
		if (div)
			ft_putnbr_fd(div, fd);
		ft_putchar_fd(mod + 48, fd);
	}
}

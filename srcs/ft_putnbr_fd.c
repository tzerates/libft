#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	long int nbr;
	long int mod;
	long int div;

	nbr = nb;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else
	{
		if (nbr < 0)
		{
			ft_putchar_fd(fd ,'-');
			nbr = nbr * -1;
		}
		div = nbr / 10;
		mod = nbr % 10;
		if (div)
			ft_putnbr_fd(div, fd);
		ft_putchar_fd(fd, mod + 48);
	}
}

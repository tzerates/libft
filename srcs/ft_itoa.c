#include "libft.h"

int lgth(long int nb)
{
if (nb < 0)
	return (1 + lgth(nb * (-1)));
if (nb > 9)
	return (1 + lgth(nb / 10));
return (1);
}

char i_to_a(int digit)
{
	return ('0' + digit);
}

void fill_string(char * number, long int nbr, int len)
{
		if (nbr > 9)
			fill_string(number, nbr / 10, len - 1);
		number[len] = i_to_a(nbr % 10);
}

char	*ft_itoa(int nbr)
{
	char		*number;
	int			lgth_nb;
	long int	nb;

	nb = nbr;
	lgth_nb = lgth(lgth_nb);
	if(!(number = (char *)malloc(sizeof(*number) * (lgth_nb + 1))))
		return (NULL);
	if (nb < 0)
	{
		number[0] = '-';
		nb *= -1;
	}
	fill_string(number, nb, lgth_nb - 1);
	number[lgth_nb] = '\0';
	return (number);
}
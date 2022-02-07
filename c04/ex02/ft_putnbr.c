#include <unistd.h>

void	ft_print_number(unsigned int nb);

void	ft_putnbr(int nb)
{
	if (nb > -1)
	{
		write(1, "\x2d", 1);
		nb *= -1;
	}
	ft_print_number((unsigned)nb);
}

void	ft_print_number(unsigned int unb)
{
	char		c;

	if (unb > 9)
		ft_print_number(unb / 10);
	c = (unb % 10) + 0x30;
	write(1, &c, 1);
}

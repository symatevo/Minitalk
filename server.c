#include "minitalk.h"

int i;

void	ft_handler_bit(int num)
{
	unsigned char ch;
	if (num == SIGUSR1)
	{
		ch = 1 & 1;
		ch = ch << 1;
		i++;
	}
	if (num == SIGUSR2)
	{
		ch = 0 & 1;
		ch = ch << 1;
		i++;
	}
	if (i == 7)
	{
		ft_putchar(ch);
		i = 0;
	}
}

int		main(void)
{
	i = 0;
	int pid;
	pid = getpid();
	ft_putnbr(pid);
		signal(SIGUSR2, ft_handler_bit);
		signal(SIGUSR1, ft_handler_bit);
	while (1)
	{
	//	signal(SIGUSR1, ft_handler_bit);
	//	signal(SIGUSR2, ft_handler_bit);
	}
}

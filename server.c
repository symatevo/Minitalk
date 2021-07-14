#include <unistd.h>
#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include "libft/libft.h"

typedef struct s_data
{
	char	ch;
	int	pid;
	int		pos;
}				t_data;

t_data data;

void	ft_handler_bit(int sig)
{
	if (sig == SIGUSR2)
		data.ch |= 1 << data.pos; 
	data.pos++;
	if (data.pos == 8)
	{
		data.pos = 0;
		if (!data.ch)
			ft_putchar('\n');
		else
			ft_putchar(data.ch);
		data.ch = 0;
	}
}

int		main(void)
{
	data.ch = 0;
	data.pos = 0;
	ft_putnbr(getpid());
	ft_putchar('\n');
	signal(SIGUSR1, ft_handler_bit);
	signal(SIGUSR2, ft_handler_bit);
	while (1)
	{
		pause();
	}
	return (0);
}

#include <sys/types.h>
#include <signal.h>
#include "libft/libft.h"

void	ft_bit_by_bit(int pid, char ch)
{
	int i;
	char bit;

	i = 0;
	while(i < 8)
	{
		bit = (ch >> i) & 1;
		if (bit == 1)
			kill(pid, SIGUSR2);
		if (bit == 0)
			kill(pid, SIGUSR1);
		usleep(200);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		i;
	int		pid;

	i = 0;
	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		while (argv[2][i])
		{
			ft_bit_by_bit(pid, argv[2][i]);
			i++;
		}
		ft_bit_by_bit(pid, 0);
	}
}

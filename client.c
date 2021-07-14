#include "minitalk.h"

char *decimal_to_binary(int n)
{
  int c, d, t;
  char *p;

  t = 0;
  p = (char*)malloc(32+1);

  if (p == NULL)
    exit(EXIT_FAILURE);

  for (c = 31 ; c >= 0 ; c--)
  {
    d = n >> c;

    if (d & 1)
      *(p+t) = 1 + '0';
    else
      *(p+t) = 0 + '0';

    t++;
  }
  *(p+t) = '\0';

  return  p;
}

void	ft_get_bit_by_bit(int pid, unsigned char ch)
{
	int				i;
	unsigned char	bit;
	unsigned char	mask;

	mask = 1;
	i = 0;
	while (i <= 7)
	{
		bit = ch & mask;
		if (bit == 1)
			kill(pid, SIGUSR1);
		if (bit == 0)
			kill(pid, SIGUSR2);
		ch = ch >> 1;
	}
}

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int pid;
		int idx;

		pid = ft_atoi(argv[1]);
		idx = 0;
		while (argv[2][idx])
		{
			ft_get_bit_by_bit(pid, argv[2][idx]);
			idx++;
		}
		return (0);
	}
}

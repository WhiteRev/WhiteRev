#include<stdio.h>

int		ft_iterative_power(int nb, int power)
{
	int a;
	int turn;

	if ( power < 0)
		return(0);
	if ( power == 1)
		return(nb);
	a = nb;
	turn=1;
	while ( turn < power)
		{
			a= nb * a;
			++turn;
		}
	return(a);
}

int		main()
{
	int power;
	int nb;
	nb = 2;
	power = -2;
	int test = ft_iterative_power(nb, power);
	printf("%d", test);
	return(0);
}

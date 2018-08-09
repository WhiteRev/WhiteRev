#include<stdio.h>

int		ft_recursive_power(int nb, int power)
{
	int a;
	int turn;

	if ( power < 0)
		return(0);
	if ( power == 1)
		return(nb);
	a = nb;
	turn=1;
	if( power > 1 )
		return ft_recursive_power( nb * nb , power - 1 );
	return(a);
}

int		main()
{
	int power;
	int nb;
	nb = 2;
	power = 2;
	int test = ft_recursive_power(nb, power);
	printf("%d", test);
	return(0);
}

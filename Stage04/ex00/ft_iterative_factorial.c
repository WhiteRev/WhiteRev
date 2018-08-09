#include<stdio.h>

int		ft_iterative_factorial(int nb)
{
	int a;
	
	a = 1;
	if (nb == 0)
		return(1);
	if  (nb > 0 || nb < 12)
	{
		while (nb > 0 )
		{
			a=a * nb;
			nb--;
		}
	return(a);
	}
	return(0);
}

int		main()
{
	int nb;

	nb = 10;
	int test = ft_iterative_factorial(nb);
	printf("%d", test);
	return(0);
}

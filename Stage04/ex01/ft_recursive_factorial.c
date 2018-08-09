#include<stdio.h>

int		ft_recursive_factoriall(int nb)
{
	int a;
	
	a = 1;
	if (nb == 0)
		return(1);
	if  (nb > 0 || nb < 12)
	{
		a=a * nb;
		return ft_recursive_factorial(nb--);
	}
	return(a);
	}
	return(0);
}

int		main()
{
	int nb;

	nb = 0;
	int test = ft_recursive_factorial(nb);
	printf("%d", test);
	return(0);
	
}

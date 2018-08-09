/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slandaue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 21:20:44 by slandaue          #+#    #+#             */
/*   Updated: 2018/08/08 21:37:29 by slandaue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(int c);

void	affichage(int a, int b)
{
	int n;

	n = a / 10;
	ft_putchar(n + 48);
	n = a % 10;
	ft_putchar(n + 48);
	ft_putchar(' ');
	n = b / 10;
	ft_putchar(n + 48);
	n = b % 10;
	ft_putchar(n + 48);
	if (a != 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 1;
	while (a <= 98)
	{
		while (b <= 99)
		{
			affichage(a, b);
			b++;
		}
		a++;
		b = a + 1;
	}
}

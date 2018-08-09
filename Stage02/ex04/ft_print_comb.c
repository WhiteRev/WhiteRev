/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slandaue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 16:08:52 by slandaue          #+#    #+#             */
/*   Updated: 2018/08/08 19:09:45 by slandaue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char n);

void	affichage(char a, char b, char c)
{
	if (a < b && b < c)
	{
		if (a == '7' && b == '8' && c == '9')
		{
			ft_putchar(a);
			ft_putchar(b);
			ft_putchar(c);
		}
		else
		{
			ft_putchar(a);
			ft_putchar(b);
			ft_putchar(c);
			ft_putchar(' ');
			ft_putchar(',');
		}
	}
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '7')
	{
		while (c <= '8')
		{
			while (c <= '9')
			{
				affichage(a, b, c);
				c++;
			}
			c = b + 1;
			b++;
		}
		affichage(a, b, c);
		a++;
		b = a + 1;
	}
}

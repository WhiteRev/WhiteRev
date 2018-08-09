/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slandaue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 19:48:47 by slandaue          #+#    #+#             */
/*   Updated: 2018/08/08 21:40:16 by slandaue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	nbr_negative(int nb)
{
	char n;

	n = '-';
	if (nb < 0)
	{
		ft_putchar(n);
		nb = nb * (-1);
	}
}

void	ft_putnbr(int nb)
{
	nbr_negative(nb);
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar('0' + nb % 10);
}

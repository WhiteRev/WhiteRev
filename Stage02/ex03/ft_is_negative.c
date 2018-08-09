/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slandaue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 15:41:45 by slandaue          #+#    #+#             */
/*   Updated: 2018/08/08 17:30:55 by slandaue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_is_negative(int i)
{
	char c;

	if (i >= 0)
	{
		c = 'P';
		ft_putchar(c);
	}
	else
	{
		c = 'N';
		ft_putchar(c);
	}
}
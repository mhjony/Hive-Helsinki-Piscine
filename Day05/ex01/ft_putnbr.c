/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhasan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 13:08:34 by mhasan            #+#    #+#             */
/*   Updated: 2019/08/20 18:47:29 by mhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	long k;

	k = nb;
	if (k > 2147483647 || k < -2147483648)
		return ;
	if (k < 0)
	{
		ft_putchar('-');
		k = k * -1;
	}
	if ((k / 10) > 0)
	{
		ft_putnbr(k / 10);
	}
	ft_putchar(k % 10 + '0');
	return ;
}
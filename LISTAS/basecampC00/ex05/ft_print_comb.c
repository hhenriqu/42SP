/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhenriqu <hhenriqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 07:01:05 by hhenriqu          #+#    #+#             */
/*   Updated: 2022/04/12 06:36:26 by hhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_impressao(char c1, char c2, char c3)
{
	ft_putchar(c1);
	ft_putchar(c2);
	ft_putchar(c3);
	if (c1 < '7')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	cen;
	char	dez;
	char	uni;

	cen = '0';
	while (cen <= '7')
	{
		dez = cen + 1;
		while (dez <= '8')
		{
			uni = dez +1;
			while (uni <= '9')
			{
				ft_impressao(cen, dez, uni);
				uni++;
			}
			dez++;
		}
		cen++;
	}
}

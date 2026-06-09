/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acamelo <acamelo@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 21:33:11 by acamelo           #+#    #+#             */
/*   Updated: 2026/02/14 21:36:54 by acamelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	writett(int a, int b)
{
	char	c;

	c = ('0' + (a / 10));
	write(1, &c, 1);
	c = ('0' + (a % 10));
	write(1, &c, 1);
	write(1, " ", 1);
	c = ('0' + (b / 10));
	write(1, &c, 1);
	c = ('0' + (b % 10));
	write(1, &c, 1);
	if (!(a == 98 && b == 99))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			writett(a, b);
			b++;
		}
		a++;
	}
}
/*int main ()
{
    ft_print_comb2();
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acamelo <acamelo@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 21:33:11 by acamelo           #+#    #+#             */
/*   Updated: 2026/07/09 13:29:39 by acamelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n)
{
	int	digits[n];
	int	i;
	char	c;

	i = 0;
	while (i < n)
	{
		digits[i] = i;
		i++;
    }
	while (digits[i] <= 10 - n)
	{
		i = 0;
		while (i < n)
		{
			c = '0' + digits[i];
			write(1, &c, 1);
			i++;
		}
		if (digits[i] < 10 - n)
			write(1, ", ", 2);
		i = n - 1;
		while (i >= 0 && digits[i] == 9 - (n - 1 - i))
		{
		i--; 
		}
		if (i >= 0)
		{
			digits[i]++;
			while(++i < n)
			{
				digits[i] = digits[i - 1] + 1;
			}
		}
		else
			break;
	}
}
int main ()
{
    ft_print_combn(2);
}
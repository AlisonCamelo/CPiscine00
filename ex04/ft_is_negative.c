/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acamelo <acamelo@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 19:38:54 by acamelo           #+#    #+#             */
/*   Updated: 2026/02/02 19:44:17 by acamelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	u;
	char	p;

	u = 'N';
	p = 'P';
	if (n < 0)
	{
		write(1, &u, 1);
	}
	else
	{
		write(1, &p, 1);
	}
}

/*int	main(void)
{
	ft_is_negative(1);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acamelo <acamelo@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 19:31:36 by acamelo           #+#    #+#             */
/*   Updated: 2026/02/02 19:32:25 by acamelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	a;
	char	z;

	a = 97;
	z = 122;
	while (a <= z)
	{
		write(1, &a, 1);
		a++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acamelo <acamelo@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 19:33:26 by acamelo           #+#    #+#             */
/*   Updated: 2026/02/02 19:35:03 by acamelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	z;
	char	a;

	z = 122;
	a = 97;
	while (z >= a)
	{
		write(1, &z, 1);
		z--;
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet ();
}*/

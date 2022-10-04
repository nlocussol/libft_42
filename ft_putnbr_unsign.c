/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsign.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlocusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 10:22:18 by nlocusso          #+#    #+#             */
/*   Updated: 2022/10/03 13:14:51 by nlocusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_unsign(unsigned int nb)
{
	unsigned int	nb_temp;

	nb_temp = nb + '0';
	if (nb <= 9)
		write(1, &nb_temp, 1);
	if (nb > 9)
	{
		ft_putnbr_unsign(nb / 10);
		ft_putnbr_unsign(nb % 10);
	}
}

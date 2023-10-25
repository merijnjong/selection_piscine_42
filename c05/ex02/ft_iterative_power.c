/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 15:03:33 by mjong             #+#    #+#             */
/*   Updated: 2023/06/29 17:27:53 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	temp;

	temp = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		nb = (nb * temp);
		power--;
	}
	return (nb);
}

// int	main(void)
// {
// 	int	nb = 3;
// 	int	power = 3;

// 	printf("%i", ft_iterative_power(nb, power));
// 	return (0);
// }

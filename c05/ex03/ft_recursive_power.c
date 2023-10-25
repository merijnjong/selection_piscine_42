/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 15:18:30 by mjong             #+#    #+#             */
/*   Updated: 2023/06/29 17:27:50 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	while (power != 0)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	return (1);
}

// int	main(void)
// {
// 	int nb = 323232322;
// 	int	power = 2323232;

// 	printf("%i", ft_recursive_power(nb, power));
// 	return (0);
// }

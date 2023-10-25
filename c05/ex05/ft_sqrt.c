/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 16:18:31 by mjong             #+#    #+#             */
/*   Updated: 2023/06/29 17:27:48 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long long	num;

	num = 1;
	if (nb < 1)
		return (0);
	if (nb == 1)
		return (1);
	while (num * num <= nb)
	{
		if (num * num == nb)
			return (num);
		num++;
	}
	return (0);
}

// int	main(void)
// {
// 	int result = ft_sqrt(2147483647);

// 	printf("%i", result);
// 	return (0);
// }

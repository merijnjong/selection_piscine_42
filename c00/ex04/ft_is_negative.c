/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 17:55:28 by mjong             #+#    #+#             */
/*   Updated: 2023/06/13 10:58:51 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <unistd.h>

void	ft_is_negative(int n)
{
	char	output;

	if (n < 0)
	{
		output = 'N';
	}
	else
	{
		output = 'P';
	}
	write(1, &output, 1);
}

// int	main(void)
// {
// 	int	num;

// 	scanf("%d", &num);
// 	ft_is_negative(num);
// 	return (0);
// }

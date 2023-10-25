/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 10:30:39 by mjong             #+#    #+#             */
/*   Updated: 2023/06/22 19:21:40 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	swt;
	int	temp;

	index = 0;
	swt = (size / 2);
	while (index < swt)
	{
		temp = tab[index];
		tab[index] = tab[size - 1 - index];
		tab[size - 1 - index] = temp;
		index++;
	}
}

// int	main(void)
// {
// 	int	num[] = {1, 2, 3, 4, 5};

// 	ft_rev_int_tab(num, 5);
// 	printf("%d, %d, %d, %d, %d\n", num[0], num[1], num[2], num[3], num[4]);
// 	return (0);
// }

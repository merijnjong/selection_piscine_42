/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 09:25:54 by mjong             #+#    #+#             */
/*   Updated: 2023/06/14 19:32:10 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// int	main(void)
// {
// 	int	num1;
// 	int	num2;

// 	num1 = 1;
// 	num2 = 2;
// 	printf("Before: %d, %d\n", num1, num2);
// 	ft_swap(&num1, &num2);
// 	printf("After: %d, %d\n", num1, num2);
// 	return (0);
// }

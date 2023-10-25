/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:47:29 by mjong             #+#    #+#             */
/*   Updated: 2023/06/14 19:32:13 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 11;
// 	b = 4;
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("Div: %d\n", a);
// 	printf("Mod: %d\n", b);
// 	return (0);
// }

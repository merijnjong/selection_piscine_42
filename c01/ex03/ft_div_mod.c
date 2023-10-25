/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 09:39:52 by mjong             #+#    #+#             */
/*   Updated: 2023/06/14 19:32:12 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int	div;
// 	int	mod;

// 	ft_div_mod(10, 3, &div, &mod);
// 	printf("Div: %d\n", div);
// 	printf("Mod: %d\n", mod);
// 	return (0);
// }

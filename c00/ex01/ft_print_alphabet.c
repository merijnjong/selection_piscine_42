/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 13:53:24 by mjong             #+#    #+#             */
/*   Updated: 2023/06/09 13:44:51 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	sym;

	sym = 'a';
	while (sym <= 'z')
	{
		write(1, &sym, 1);
		sym++;
	}
}

// int	main(void)
// {
// 	ft_print_alphabet();
// 	return (0);
// }

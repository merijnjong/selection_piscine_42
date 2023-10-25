/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:20:14 by mjong             #+#    #+#             */
/*   Updated: 2023/06/15 13:03:29 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		write(1, &str[index], 1);
		index++;
	}
}

// int	main(void)
// {
// 	ft_putstr("hello");
// 	return (0);
// }

// void	ft_putstr(char *str)
// {
// 	int	index;

// 	index = 0;
// 	while (str[index] != '\0')
// 	{
// 		index++;
// 	}
// 	write(1, str, index);
// }

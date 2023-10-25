/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:11:50 by mjong             #+#    #+#             */
/*   Updated: 2023/06/22 13:14:18 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

// int	ft_strcmp(char *s1, char *s2);

// int	main(void)
// {
// 	char s1[] = "hallotjes";
// 	char s2[] = "hallotje";

// 	int result1 = ft_strcmp(s1, s2);
// 	int result2 = strcmp(s1, s2);
// 	printf("%d\n", result1);
// 	printf("%d\n", result2);
// 	return (0);
// }

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

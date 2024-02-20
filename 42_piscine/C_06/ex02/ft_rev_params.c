/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehmaydi <mehmaydi@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:44:44 by mehmaydi          #+#    #+#             */
/*   Updated: 2023/02/22 16:52:33 by mehmaydi         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	c;
	int	i;

	c = ac - 1;
	if (ac > 1)
	{
		while (c > 0)
		{
			i = 0;
			while (av[c][i])
			{
				write(1, &av[c][i], 1);
				i++;
			}
			write(1, "\n", 1);
			c--;
		}
	}
	return (0);
}

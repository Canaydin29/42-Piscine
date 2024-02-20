/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehmaydi <mehmaydi@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:20:08 by mehmaydi          #+#    #+#             */
/*   Updated: 2023/02/22 16:44:00 by mehmaydi         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	c;

	c = 0;
	if (ac > 0)
	{
		while (av[0][c])
		{
			write(1, &av[0][c], 1);
			c++;
		}
		write(1, "\n", 1);
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehmaydi <mehmaydi@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:59:28 by mehmaydi          #+#    #+#             */
/*   Updated: 2023/02/11 11:08:36 by mehmaydi         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		write (1, &str[n], 1);
		n++;
	}	
}

int	main()
{
	char *str = "42Kocaeli";
	ft_putstr(str);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehmaydi <mehmaydi@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 16:05:16 by mehmaydi          #+#    #+#             */
/*   Updated: 2023/02/11 11:12:02 by mehmaydi         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_strlen(char *string)
{
	int	n;

	n = 0;
	while (string[n] != '\0')
	{
		n++;
	}
	return (n);
}

int	main()
{
	char *str = "42Kocaeli";
	printf("%d", ft_strlen(str));
}
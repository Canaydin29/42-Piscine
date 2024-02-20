/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehmaydi <mehmaydi@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:20:08 by mehmaydi          #+#    #+#             */
/*   Updated: 2023/02/22 16:44:00 by mehmaydi         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	main()
{
	char src[] = "Mehmet";
	char dest[] = "Can ";

	printf("%s", ft_strncpy(dest, src, 2));
	printf("\n%s", ft_strncpy(dest, src, 4));
	printf("\n%s", ft_strncpy(dest, src, 6));
}
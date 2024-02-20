/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehmaydi <mehmaydi@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:20:08 by mehmaydi          #+#    #+#             */
/*   Updated: 2023/02/22 16:44:00 by mehmaydi         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strcat(char *dest, char *src)
{
    int    x;
    int    y;

    x = 0;
    while (dest[x])
        x++;
    y = 0;
    while (src[y])
    {
        dest[x + y] = src[y];
        y++;
    }
    dest[x + y] = '\0';
    return (dest);
}

int	main()
{
	char src[] = "Mehmet";
	char dest[] = "Can ";
	printf("%s", ft_strcat(dest, src));
}
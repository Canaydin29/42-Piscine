/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehmaydi <mehmaydi@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:32:51 by mehmaydi          #+#    #+#             */
/*   Updated: 2023/02/11 10:59:08 by mehmaydi         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main()
{
	int n;
	int *nbr8 = &n;
	int **nbr7 = &nbr8;
	int ***nbr6 = &nbr7;
	int ****nbr5 = &nbr6;
	int *****nbr4 = &nbr5;
	int ******nbr3 = &nbr4;
	int *******nbr2 = &nbr3;
	int ********nbr1 = &nbr2;
	int *********nbr = &nbr1;

	ft_ultimate_ft(nbr);
	printf("%d", n);	
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehmaydi <mehmaydi@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:46:29 by mehmaydi          #+#    #+#             */
/*   Updated: 2023/02/11 11:13:35 by mehmaydi         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */


void ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int b;
	int rev;

	a = 0;
	b = size - 1;
	while (a < size / 2)
	{
		rev = tab[a];
		tab[a] = tab[b];
		tab[b] = rev;
		a++;
		b--;
	}
}

#include <stdio.h>

int main(void)
{
	int tab[] = {1,2,3,4};
	int size;
	size = 4;
	int i;
	
	ft_rev_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
}

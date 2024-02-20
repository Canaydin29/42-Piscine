/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehmaydi <mehmaydi@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:31:29 by mehmaydi          #+#    #+#             */
/*   Updated: 2023/02/11 11:16:11 by mehmaydi         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *x, int *y)
{
	int	swap;

	swap = *x;
	*x = *y;
	*y = swap;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	counter;

	while (size >= 0)
	{
		counter = 0;
		while (counter < (size -1))
		{
			if (tab[counter] > tab[counter + 1])
				ft_swap (&tab[counter], &tab[counter + 1]);
			counter++;
		}
		size--;
	}
}

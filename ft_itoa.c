/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nben-yaa <nben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 18:57:04 by nben-yaa          #+#    #+#             */
/*   Updated: 2018/06/28 01:36:18 by nben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_number_digit(int n)
{
	size_t	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n = n * -1;
	}
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	i++;
	return (i);
}

static int		init_tab(char *tab, int n, int nb)
{
	int d;

	d = 0;
	if (nb < 10)
	{
		tab[0 + n] = (nb + '0');
		return (1 + n);
	}
	else
	{
		d = init_tab(tab, n, nb / 10);
		tab[d] = ((nb % 10) + '0');
		return (d + 1);
	}
}

char			*ft_itoa(int n)
{
	char	*tab;
	int		i;

	if ((tab = ft_strnew(get_number_digit(n))) == 0)
		return (NULL);
	if (n == -2147483648)
	{
		tab[0] = '-';
		n = 214748364;
		i = init_tab(tab, 1, n);
		tab[i] = '8';
		i++;
	}
	else if (n < 0)
	{
		tab[0] = '-';
		n = -n;
		i = init_tab(tab, 1, n);
	}
	else
	{
		i = init_tab(tab, 0, n);
	}
	tab[i] = '\0';
	return (tab);
}

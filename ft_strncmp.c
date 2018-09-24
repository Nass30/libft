/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nben-yaa <nben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 19:44:54 by nben-yaa          #+#    #+#             */
/*   Updated: 2018/06/28 01:24:22 by nben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (((const unsigned char *)s1)[i] == ((const unsigned char *)s2)[i] &&
		s1[i] != '\0' && i < n)
		i++;
	if (i == n)
	{
		return (((const unsigned char *)s1)[i - 1] -
			((const unsigned char *)s2)[i - 1]);
	}
	return (((const unsigned char *)s1)[i] - ((const unsigned char *)s2)[i]);
}

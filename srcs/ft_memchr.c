/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nben-yaa <nben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 17:26:54 by nben-yaa          #+#    #+#             */
/*   Updated: 2018/06/27 20:07:08 by nben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*tmp;
	unsigned char	c_tmp;

	tmp = (unsigned char *)s;
	i = 0;
	c_tmp = (unsigned char)c;
	while (i < n)
	{
		if (tmp[i] == c_tmp)
			return (&(tmp[i]));
		i++;
	}
	return (NULL);
}

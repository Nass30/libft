/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nben-yaa <nben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 18:28:28 by nben-yaa          #+#    #+#             */
/*   Updated: 2018/06/25 19:23:21 by nben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	res;

	i = ft_strlen(dst);
	if (i >= size)
		return (ft_strlen(src) + size);
	res = ft_strlen(dst) + ft_strlen(src);
	ft_strncat(dst, src, size - ft_strlen(dst) - 1);
	return (res);
}

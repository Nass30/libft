/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nben-yaa <nben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 19:44:54 by nben-yaa          #+#    #+#             */
/*   Updated: 2018/06/25 21:55:47 by nben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (((const unsigned char *)s1)[i] == ((const unsigned char *)s2)[i] &&
		s1[i] != '\0')
		i++;
	return (((const unsigned char *)s1)[i] - ((const unsigned char *)s2)[i]);
}

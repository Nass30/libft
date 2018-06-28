/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nben-yaa <nben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 19:35:34 by nben-yaa          #+#    #+#             */
/*   Updated: 2018/06/27 20:43:24 by nben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0' && needle[j] == haystack[i + j])
			j++;
		if (needle[j] == 0)
			return ((char *)haystack + i);
		i++;
	}
	if (haystack[0] == '\0' && needle[0] == '\0')
		return ((char *)haystack);
	return (NULL);
}

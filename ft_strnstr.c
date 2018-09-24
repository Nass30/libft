/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nben-yaa <nben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 19:35:34 by nben-yaa          #+#    #+#             */
/*   Updated: 2018/06/28 01:12:07 by nben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	t1;
	size_t	t2;

	i = 0;
	t1 = ft_strlen(haystack);
	t2 = ft_strlen(needle);
	while (haystack[i] != '\0' && i < len && t1 >= t2)
	{
		j = 0;
		while (needle[j] != '\0' && needle[j] == haystack[i + j] && i + j < len)
			j++;
		if (needle[j] == 0)
			return ((char *)haystack + i);
		i++;
		t1--;
	}
	if (haystack[0] == '\0' && needle[0] == '\0')
		return ((char *)haystack);
	return (NULL);
}

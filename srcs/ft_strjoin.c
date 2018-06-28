/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nben-yaa <nben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 17:51:06 by nben-yaa          #+#    #+#             */
/*   Updated: 2018/06/26 18:12:34 by nben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;

	if (s1 == 0 || s2 == 0)
		return (NULL);
	if ((res = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1)) == 0)
		return (NULL);
	ft_strcat(res, s1);
	ft_strcat(res, s2);
	return (res);
}

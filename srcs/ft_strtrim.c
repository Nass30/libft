/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nben-yaa <nben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 17:55:40 by nben-yaa          #+#    #+#             */
/*   Updated: 2018/06/28 01:37:48 by nben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_space(int c)
{
	if (c == '\t' || c == '\n' || c == '\r' || c == '\v' || c == ' '
		|| c == '\f')
		return (1);
	else
		return (0);
}

char		*ft_strtrim(char const *s)
{
	char	*res;
	int		start;
	int		end;

	if (s == 0)
		return (NULL);
	start = 0;
	end = ft_strlen(s);
	while (is_space(s[start]) && s[start] != '\0')
		start++;
	if (start != end)
	{
		end--;
		while (is_space(s[end]) && end >= 0)
		{
			end--;
		}
		end++;
	}
	if ((res = ft_strnew(end - start)) == 0)
		return (NULL);
	ft_strncpy(res, s + start, end - start);
	return (res);
}

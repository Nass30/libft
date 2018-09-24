/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nben-yaa <nben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 18:17:47 by nben-yaa          #+#    #+#             */
/*   Updated: 2018/06/28 01:45:14 by nben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_nb_words(char const *s, char c)
{
	int	i;
	int	nb_words;
	int	j;

	i = 0;
	nb_words = 0;
	j = 0;
	while (s[i])
	{
		j = 0;
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			i++;
			j = 1;
		}
		if (j == 1)
			nb_words++;
	}
	return (nb_words);
}

static char	*add_word(char const *s, size_t *i, char c)
{
	char	*word;
	size_t	j;

	j = *i;
	while (s[j] != '\0' && s[j] != c)
		j++;
	if ((word = ft_strnew(j - *i)) == 0)
		return (NULL);
	j = 0;
	while (s[*i] != '\0' && s[*i] != c)
	{
		word[j] = s[*i];
		(*i) += 1;
		j++;
	}
	while (s[*i] == c)
		(*i)++;
	return (word);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**tab;
	size_t	i;
	int		nb_words;
	size_t	word;

	word = 0;
	i = 0;
	if (s == NULL || (nb_words = get_nb_words(s, c)) == -1 ||
		(tab = ft_memalloc(sizeof(char *) * (nb_words + 1))) == 0)
		return (0);
	while (s[i] == c)
		i++;
	while (s[i] != 0)
	{
		tab[word] = add_word(s, &i, c);
		word++;
	}
	tab[word] = NULL;
	return (tab);
}

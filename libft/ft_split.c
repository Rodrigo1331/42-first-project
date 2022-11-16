/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcruz-an <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:11:44 by rcruz-an          #+#    #+#             */
/*   Updated: 2022/11/15 10:31:48 by rcruz-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_charsplit(char *s, char c, int j)
{
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (len < j && s[len])
	{
		if (s[len] != c && len < j && s[len])
		{
			while (s[len] != c && len < j && s[len])
				len++;
			i++;
		}
		while (s[len] == c && len < j && s[len])
			len++;
	}
	return (i);
}

static char	**ft_tab(char **tab, const char *s, int len, char c)
{
	int		letter;
	int		i;

	letter = 0;
	i = 0;
	while (len > 0 && *s)
	{
		tab[i] = (char *)malloc(sizeof(char) * (len + 1));
		while (*s != c && len > 0)
		{
			tab[i][letter++] = (const char)*s;
			len--;
			s++;
		}
		while (*s == c && *s)
			s++;
		tab[i][letter] = '\0';
		letter = 0;
		i++;
	}
	tab[i] = (char *)malloc(sizeof(char));
	tab[i] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	int		len;
	int		i;
	char	**tab;

	len = 0;
	len = ft_strlen((char *)s);
	i = ft_charsplit((char *)s, c, len);
	tab = (char **)malloc(sizeof(char *) * (i + 1));
	if (tab == NULL)
		return (NULL);
	tab[0] = NULL;
	if (!s || !c || !len)
		return (tab);
	while (*s == c)
		s++;
	tab = ft_tab(tab, s, len, c);
	return (tab);
}

/*int main(){
	char const* s = "Banana andante";
	char c = 'a';

	printf("%p\n", ft_split(s, c));
	return (0);
}*/
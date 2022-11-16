/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcruz-an <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 04:45:45 by rcruz-an          #+#    #+#             */
/*   Updated: 2022/11/09 09:55:14 by rcruz-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*dest;
	char	*src;

	dest = (char *)haystack;
	src = (char *)needle;
	if (src[0] == '\0')
		return (dest);
	i = 0;
	while (dest[i] != '\0')
	{
		j = 0;
		if (dest[i] == src[0])
		{
			while (dest[i + j] == src[j]
				&& (j + i) < len && src[j] != '\0')
				j++;
			if (src[j] == '\0')
				return (&dest[i]);
		}
		i++;
	}
	return (0);
}

/*int main()
{
	char str[] = "Honor Among Thieves";
	char to_find[] = "ol";
	char *n = ft_strnstr(str, to_find);
	printf("%s", n);
}*/

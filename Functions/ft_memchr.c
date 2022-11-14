/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcruz-an <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 14:50:01 by rcruz-an          #+#    #+#             */
/*   Updated: 2022/11/09 09:33:01 by rcruz-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int y, size_t n)
{
	int		i;
	char	*s;

	i = 0;
	s = (char *) str;
	if (y == '\0')
		return (0);
	while (s[i] && n > 0)
	{
		if (s[i] == y)
			return (&s[i]);
		i++;
		n--;
	}
	return (0);
}

/*int main (){
	const char *str = "Dishonored";
	int y = 100;
	size_t n = 10;

	printf("%s\n", ft_memchr(str, y, n));
}*/

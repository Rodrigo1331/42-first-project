/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcruz-an <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 04:45:45 by rcruz-an          #+#    #+#             */
/*   Updated: 2022/11/09 09:46:35 by rcruz-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int n)
{
	int		i;
	int		len;
	char	*s;

	s = (char *) str;
	len = ft_strlen(s);
	i = len - 1;
	if (n == '\0')
		return (&s[len]);
	while (i >= 0)
	{
		if (s[i] == n)
			return (&s[i]);
		i--;
	}
	return (0);
}

/*int main (){
	const char *str = "Hello There!";
	int n = 101;

	printf("%s\n", ft_strrchr(str, n));
}*/

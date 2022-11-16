/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcruz-an <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 20:28:03 by rcruz-an          #+#    #+#             */
/*   Updated: 2022/11/11 12:19:22 by rcruz-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s0;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	s0 = (char *)malloc(sizeof(*s) * (len + 1));
	if (s == 0)
		return (0);
	while (s[j])
	{
		if (start <= j && len > i)
		{
			s0[i++] = s[j];
		}
		j++;
	}
	s0[i] = '\0';
	return (s0);
}

/*int main(){
	char const *s = "HonorAmongThieves";
	unsigned int start = 5;
	size_t len = 5;
	printf("%s\n", ft_substr(s, start, len));
}*/

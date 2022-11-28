/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcruz-an <rcruz-an@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 14:50:01 by rcruz-an          #+#    #+#             */
/*   Updated: 2022/11/23 15:35:55 by rcruz-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int y, size_t n)
{
	unsigned char	*s;

	s = (unsigned char *)str;
	while (n > 0)
	{
		if (*s == (unsigned char)y)
			return ((void *)s);
		s++;
		n--;
	}
	return (NULL);
}

/*int main (){
	char *src = "/|\x12\xff\x09\0\x42\042\0\42|\\";
	int y = 100;
	int size = 12;

	printf("%s\n", ft_memchr(src, '\0', size));
}*/
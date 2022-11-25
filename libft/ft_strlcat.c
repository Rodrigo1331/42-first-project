/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcruz-an <rcruz-an@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 11:17:14 by rcruz-an          #+#    #+#             */
/*   Updated: 2022/11/25 11:01:16 by rcruz-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	d;
	unsigned int	s;

	s = 0;
	i = 0;
	d = 0;
	if (size == 0)
		return (0);
	while (dst[d] != '\0')
		d++;
	while (src[s] != '\0')
		s++;
	if (d >= size)
		return (s + size);
	while ((src[i] != 0) && ((size - 1) > (d + i)))
	{
		dst[d + i] = ((char *)src)[i];
		i++;
	}
	dst[d + i] = '\0';
	return (s + d);
}

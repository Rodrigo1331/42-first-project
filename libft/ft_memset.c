/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcruz-an <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 20:28:03 by rcruz-an          #+#    #+#             */
/*   Updated: 2022/11/09 09:55:52 by rcruz-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int a, size_t length)
{
	if (length > 0)
	{
		while (length--)
		{
			*(unsigned char *)(dest + length) = (unsigned char)(a);
		}
	}
	return (dest);
}

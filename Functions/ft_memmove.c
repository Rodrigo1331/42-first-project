/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcruz-an <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 20:28:03 by rcruz-an          #+#    #+#             */
/*   Updated: 2022/11/09 14:27:21 by rcruz-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memmove(void *dest, const void *src, size_t n)
{
	char			*d;
	const char		*s;
	char			*t;
	unsigned int	i;

	d = dest;
	s = src;
	i = 0;
	t = malloc(sizeof(t));
	if (dest == src)
		return (0);
	while (n > i)
	{
		*(t + i) = *(s + i);
		i++;
	}
	i = 0;
	while (n > i)
	{
		*d++ = *t++;
		i++;
	}
	return (dest);
}

/*int main () {
   char dest[] = "oldstring";
   const char src[]  = "newstring";

   printf("Before memmove dest = %s\n", dest);
   ft_memmove(dest, src, 9);
   printf("After memmove dest = %s\n", dest);

   return(0);
}*/

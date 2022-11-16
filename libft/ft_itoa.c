/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcruz-an <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:11:44 by rcruz-an          #+#    #+#             */
/*   Updated: 2022/11/05 10:56:22 by rcruz-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_digit(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len++;
	if (n < 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		i;
	int		len;

	len = count_digit(n);
	s = malloc(sizeof(char *) * (len + 1));
	if (!s)
		return (0);
	if (n < 0)
	{
		s[0] = '-';
		i = -n;
	}
	else
		i = n;
	s[len] = '\0';
	while (i)
	{
		s[len - 1] = i % 10 + '0';
		i = i / 10;
		len--;
	}
	return (s);
}

/*int main(){
	int n = ;

	printf("%s\n", ft_itoa(n));
	return 0;
}*/
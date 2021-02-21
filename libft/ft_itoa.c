/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seciurte <seciurte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 16:50:16 by seciurte          #+#    #+#             */
/*   Updated: 2020/11/26 15:35:50 by seciurte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		nbrlen(long nbr)
{
	int	len;

	len = 1;
	while ((nbr /= 10) != 0)
		len++;
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	long	nbr;
	char	*str;

	nbr = (long)n;
	len = nbrlen((nbr < 0) ? nbr * -1 : nbr) + ((nbr < 0) ? 2 : 1);
	if (!(str = malloc(sizeof(char) * len)))
		return (NULL);
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	str[--len] = '\0';
	while (len > 0 && str[--len] != '-')
	{
		str[len] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (str);
}

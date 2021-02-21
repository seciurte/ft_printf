/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seciurte <seciurte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 15:41:20 by seciurte          #+#    #+#             */
/*   Updated: 2021/02/20 11:29:03 by seciurte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utils.h"

unsigned int	get_int(char **format)
{
	unsigned short	nbr;

	nbr = 0;
	while (**format && ft_isdigit(**format))
	{
		nbr = nbr * 10 + **format - '0';
		++(*format);
	}
	return (nbr);
}

void			print_nchar(int n, char c)
{
	while (--n >= 0)
		write(1, &c, 1);
}

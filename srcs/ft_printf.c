/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seciurte <seciurte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 15:35:34 by seciurte          #+#    #+#             */
/*   Updated: 2021/02/09 16:10:23 by seciurte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utils.h"

int	ft_printf(char *format, ...)
{
	va_list		vargs;
	int			c_disp;

	if (format == NULL)
		return (-1);
	else if (ft_strlen(format) == 0)
		return (0);
	va_start(vargs, format);
	c_disp = print_format(format, &vargs);
	va_end(vargs);
	return (c_disp);
}

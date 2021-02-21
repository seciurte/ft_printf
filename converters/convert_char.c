/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seciurte <seciurte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 14:52:50 by seciurte          #+#    #+#             */
/*   Updated: 2021/02/20 18:46:50 by seciurte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utils.h"

int	convert_char(va_list *vargs, t_format *f_info)
{
	f_info->conv_format = malloc(sizeof(char) * 2);
	if (f_info->conv_format == NULL)
		return (-1);
	f_info->conv_format[0] = va_arg(*vargs, int);
	f_info->conv_format[1] = '\0';
	f_info->len_format = 1;
	return (0);
}

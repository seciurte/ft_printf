/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_percent.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seciurte <seciurte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 15:15:39 by seciurte          #+#    #+#             */
/*   Updated: 2021/02/20 11:15:13 by seciurte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utils.h"

int		convert_percent(va_list *vargs, t_format *f_info)
{
	(void)vargs;
	f_info->conv_format = malloc(sizeof(char) * 2);
	if (f_info->conv_format == NULL)
		return (-1);
	f_info->conv_format[0] = '%';
	f_info->conv_format[1] = '\0';
	f_info->len_format = 1;
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seciurte <seciurte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:48:03 by seciurte          #+#    #+#             */
/*   Updated: 2021/02/20 11:20:55 by seciurte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utils.h"

static void		print_flag(t_format f_info, int *c_disp)
{
	int			n;
	char		c;

	if (f_info.width < 0)
		f_info.width *= -1;
	if ((f_info.flag != '?' || f_info.width != 0)
			&& f_info.precision == '.' && f_info.length > f_info.width)
		return ;
	c = ' ';
	if (f_info.flag == '0' && f_info.precision != '.')
		c = '0';
	if (f_info.precision != '.')
		n = f_info.width - f_info.len_format;
	else
		n = f_info.width - f_info.length;
	print_nchar(n, c);
	if (n > 0)
		(*c_disp) += n;
}

void			print_pointer(t_format *f_info, int *c_disp)
{
	if (f_info->flag == '?' && f_info->width > 0)
		print_flag(*f_info, c_disp);
	if (*(unsigned long *)f_info->value == 0
			&& f_info->precision == '.' && f_info->length == 0)
	{
		write(1, f_info->conv_format, 2);
		(*c_disp) += 2;
	}
	else
	{
		write(1, f_info->conv_format, f_info->len_format);
		(*c_disp) += f_info->len_format;
	}
	if (f_info->flag == '-' || f_info->width < 0)
		print_flag(*f_info, c_disp);
}

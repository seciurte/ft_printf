/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seciurte <seciurte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 15:49:27 by seciurte          #+#    #+#             */
/*   Updated: 2021/02/20 11:18:52 by seciurte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utils.h"

static void		print_flag(t_format f_info, int *c_disp)
{
	if (f_info.width < 0)
		f_info.width *= -1;
	print_nchar(f_info.width - 1, ' ');
	if (f_info.width - 1 > 0)
		(*c_disp) += f_info.width - 1;
}

void			print_char(t_format *f_info, int *c_disp)
{
	if (f_info->flag == '?' && f_info->width > 0)
		print_flag(*f_info, c_disp);
	write(1, f_info->conv_format, f_info->len_format);
	(*c_disp) += f_info->len_format;
	if (f_info->flag == '-' || f_info->width < 0)
		print_flag(*f_info, c_disp);
}

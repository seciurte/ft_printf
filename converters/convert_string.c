/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seciurte <seciurte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 11:31:02 by seciurte          #+#    #+#             */
/*   Updated: 2021/02/20 18:45:53 by seciurte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utils.h"

int		convert_string(va_list *vargs, t_format *f_info)
{
	char		*str;

	str = va_arg(*vargs, char *);
	if (str != NULL)
		f_info->conv_format = ft_strdup(str);
	else
		f_info->conv_format = ft_strdup("(null)");
	f_info->len_format = ft_strlen(f_info->conv_format);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 19:23:34 by lorenzo           #+#    #+#             */
/*   Updated: 2024/08/22 19:47:17 by lorenzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
//Since last element of a list points to NULL we cycle the strings until NULL.

int	ft_list_size(t_list *begin_list)
{
	int 	i;
	
	i = 0;
	while(*begin_list)
	{
		begin_list = begin_list -> next;
		i++;
	}
	return (i);
}

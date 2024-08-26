/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lonulli <lonulli@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 23:22:18 by lonulli           #+#    #+#             */
/*   Updated: 2024/08/26 23:22:19 by lonulli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*ptr;

	while(*begin_list)
	{
		if((*cmp)((*begin_list)->data, data_ref) == 0)
		{
			(*free_fct)((*begin_list)->data);
			ptr = (*begin_list)->next;
			free(*begin_list);
			*begin_list = ptr;
		}
		*begin_list = (*begin_list)->next;
	}
}

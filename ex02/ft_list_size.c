/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 19:23:34 by lorenzo           #+#    #+#             */
/*   Updated: 2024/08/22 23:04:07 by lorenzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
//Since last element of a list points to NULL we cycle the strings until NULL.

int	ft_list_size(t_list *begin_list)
{
	int 	i;
	
	i = 0;
	while(begin_list)
	{
		begin_list = begin_list -> next;
		i++;
	}
	return (i);
}
#include <stdio.h>
/*int main()
{
	//Create nodes list.
	t_list *node1 = (t_list*)malloc(sizeof(t_list));
	t_list *node2 = (t_list*)malloc(sizeof(t_list));
	t_list *node3 = (t_list*)malloc(sizeof(t_list));
	
	//setting up node data and linking nodes.
	node1->data = "First";
	node1->next = node2;

	node2->data = "Second";
	node2->next = node3;

	node3->data = "Third";
	node3->next = NULL;

	printf("List size %i\n", ft_list_size(node1));
}*/

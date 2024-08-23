/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 11:16:12 by lorenzo           #+#    #+#             */
/*   Updated: 2024/08/23 12:17:46 by lorenzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *current;
	t_list *end_list;

	current = *begin_list;
	while (current->next != NULL)
		current = current->next;
	end_list = ft_create_elem(data);
	current->next = end_list;
}
/*#include <stdio.h>
int main()
{
	t_list *end;

	t_list *node1 = (t_list*)malloc(sizeof(t_list));
	t_list *node2 = (t_list*)malloc(sizeof(t_list));
	t_list *node3 = (t_list*)malloc(sizeof(t_list));

	node1->data = "ciao";
	node1->next = node2;

	node2->data = "ciao2";
	node2->next = node3;

	node3->data = "ciao3";
	node3->next = NULL;

	void *data;
	data = "DAJE ROMA, SEI ARIVATO AR TRAGUARDO AO FERMETE";
	ft_list_push_back(&node1, data);
	while(node1)
	{
		printf("AL nodo corrente trovo %s\n", (char *)node1->data);
		printf("Questo nodo punta a %p\n", node1->next);
		node1 = node1->next;
	}
}*/

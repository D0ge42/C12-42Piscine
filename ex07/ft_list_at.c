/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 17:25:50 by lorenzo           #+#    #+#             */
/*   Updated: 2024/08/23 17:58:31 by lorenzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*current;
	unsigned int	i;

	current = begin_list;
	i = 0;
	while (current)
	{
		if (i == nbr)
			return (current);
		current = current->next;
		i++;
	}
	return (NULL);
}
/*int main()
{
	t_list *node1;
	t_list *node2;
	t_list *node3;
	

	node1 = (t_list*)malloc(sizeof(t_list));
	node2 = (t_list*)malloc(sizeof(t_list));
	node3 = (t_list*)malloc(sizeof(t_list));
	
	node1->data = "ciao1";
	node1->next = node2;

	node2->data = "ciao2";
	node2->next = node3;

	node3->data = "ciao3";
	node3->next = NULL;

	t_list *node_found = ft_list_at(node1, 2);

	if (node_found)
	{
		printf("Indirizzo nodo trovato con la funzione: %p\n", node_found);
		printf("Indirizzo nodo corrispettivo: 		%p\n", node2);
	}
	else
		printf("Non ho trovato nulla\n");
}*/

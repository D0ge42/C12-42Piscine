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

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list	*current;
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
#include <stdio.h>
int main()
{
	int a,b,c,d,e;
	t_list *node1,*node2,*node3,*node4,*node5;
	a = 1;
	b = 2;
	c = 3;
	d = 4;
	e = 5;
	node1 = ft_create_elem(&a);
	node1->next = node2;

	node2 = ft_create_elem(&b);
	node2->next = node3;

	node3 = ft_create_elem(&c);
	node3->next = node4;

	node4 = ft_create_elem(&d);
	node3->next = node5;

	node5 = ft_create_elem(&e);
	node5->next = NULL;

	t_list *node_found = ft_list_at(node1, 4);

	if (node_found)
		printf("Ho trovato il dato all'index richiesto: %i\n", *((node_found->data)));
}




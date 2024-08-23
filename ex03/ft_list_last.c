/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 10:30:02 by lorenzo           #+#    #+#             */
/*   Updated: 2024/08/23 11:06:21 by lorenzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	while (begin_list -> next != NULL)
		begin_list = begin_list -> next;
	return (begin_list);
}
/*#include <stdio.h>
int main()
{
	int num1 = 123;
	int num2 = 456;
	int num3 = 789;
	t_list *node1 = (t_list*)malloc(sizeof(t_list));
	t_list *node2 = (t_list*)malloc(sizeof(t_list));
	t_list *node3 = (t_list*)malloc(sizeof(t_list));

	node1->data = &num1;
	node1-> next = node2;

	node2->data = &num2;
	node2->next = node3;

	node3->data = &num3;
	node3->next = NULL;

	t_list *last_node = ft_list_last(node1);

	printf("All'ultimo nodo troviamo il dato %i\n",*(int *)last_node->data);

}*/

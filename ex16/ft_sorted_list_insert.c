/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lonulli <lonulli@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 11:39:11 by lonulli           #+#    #+#             */
/*   Updated: 2024/08/29 11:39:13 by lonulli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <string.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->data = data;
	new->next = NULL;
	return (new);
}

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*start;
	t_list	*og;
	void	*temp;
	t_list	*new;

	new = ft_create_elem(data);
	new->next = *begin_list;
	*begin_list = new;
	og = new;
	while (og)
	{
		start = new;
		while (start->next)
		{
			if ((*cmp)(start->data, start->next->data) > 0)
			{
				temp = start->data;
				start->data = start->next->data;
				start->next->data = temp;
			}
			start = start->next;
		}
		og = og->next;
	}
}

/*int cmp(void *a, void *b)
{
	return strcmp ((char *)a, (char *)b);
}

void ft_print_list(t_list *begin_list)
{
	while(begin_list)
	{
		printf("%s ->",(char *)begin_list->data);
		begin_list = begin_list->next;
	}
	printf("NULL\n");
}

int main()
{
	t_list *node1, *node2, *node3, *node4, *node5;


	node1 = (t_list *)malloc(sizeof(t_list));
	node2 = (t_list *)malloc(sizeof(t_list));
	node3 = (t_list *)malloc(sizeof(t_list));	
	node4 = (t_list *)malloc(sizeof(t_list));

	node1->data = "3";
	node1->next = node2;

	node2->data = "2";
	node2->next = node3;

	node3->data = "7";
	node3->next =  node4;

	node4->data = "1";
	node4->next = NULL;

	ft_print_list(node1);
	ft_sorted_list_insert(&node1, "9" , cmp);
	ft_print_list(node1);

}*/

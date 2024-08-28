/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lonulli <lonulli@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 21:19:24 by lonulli           #+#    #+#             */
/*   Updated: 2024/08/27 21:19:25 by lonulli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <string.h>

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*point;
	void	*tmp;
	t_list	*orig_point;

	point = *begin_list;
	orig_point = *begin_list;
	while (orig_point)
	{
		point = *begin_list;
		while (point->next)
		{
			if ((*cmp)(point->data, point->next->data) > 0)
			{
				tmp = point->data;
				point->data = point->next->data;
				point->next->data = tmp;
			}
			point = point->next;
		}
		orig_point = orig_point->next;
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

void free_list(t_list *head)
{
	t_list	*tmp;
	
	while(head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}

int main()
{
	t_list *node1, *node2, *node3, *node4, *node5;


	node1 = (t_list *)malloc(sizeof(t_list));
	node2 = (t_list *)malloc(sizeof(t_list));
	node3 = (t_list *)malloc(sizeof(t_list));	
	node4 = (t_list *)malloc(sizeof(t_list));
	node5 = (t_list *)malloc(sizeof(t_list));

	node1->data = "ciao3";
	node1->next = node2;

	node2->data = "ciao2";
	node2->next = node3;

	node3->data = "ciao0";
	node3->next =  node4;

	node4->data = "ciao1";
	node4->next = node5;

	node5->data = "ciao2";
	node5->next = NULL;
	
	ft_print_list(node1);
	ft_list_sort(&node1,cmp);
	ft_print_list(node1);

	free_list(node1);
}*/

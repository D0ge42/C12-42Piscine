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
	t_list	*point = *begin_list;
	int i = 0;
	void 	*tmp;
	while(point)
	{
		i++;
		point = point->next;
	}
	point = *begin_list;
	int count = i;
	i = 0;
	int j = 0;
	while(i < count)
	{	
		while(j < count - 1)
		{
			if ((*cmp)(point->data, point->next->data) > 0)
			{
				tmp = point->data;
				point->data = point->next->data;
				point->next->data = tmp;
			}
			point = point->next;
			j++;
		}
		i++;
	}
}

int cmp(void *a, void *b)
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
	t_list *node1, *node2, *node3, *node4;


	node1 = (t_list *)malloc(sizeof(t_list));
	node2 = (t_list *)malloc(sizeof(t_list));
	node3 = (t_list *)malloc(sizeof(t_list));	
	node4 = (t_list *)malloc(sizeof(t_list));

	node1->data = "ciao9";
	node1->next = node2;

	node2->data = "ciao9";
	node2->next = node3;

	node3->data = "ciao2";
	node3->next =  node4;

	node4->data = "ciao3";
	node4->next = NULL;


	ft_print_list(node1);
	ft_list_sort(&node1,cmp);
	ft_print_list(node1);
}

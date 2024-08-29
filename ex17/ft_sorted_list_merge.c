/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lonulli <lonulli@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:37:16 by lonulli           #+#    #+#             */
/*   Updated: 2024/08/29 15:37:18 by lonulli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2,
		int (*cmp)())
{
	t_list	*temp1;
	t_list	*temp2;
	void	*data;

	temp2 = begin_list2;
	while (begin_list2->next)
		begin_list2 = begin_list2->next;
	begin_list2->next = *begin_list1;
	*begin_list1 = temp2;
	temp1 = temp2;
	while (temp1)
	{
		temp2 = *begin_list1;
		while (temp2->next)
		{
			if ((*cmp)(temp2->data, temp2->next->data) > 0)
			{
				data = temp2->data;
				temp2->data = temp2->next->data;
				temp2->next->data = data;
			}
			temp2 = temp2->next;
		}
		temp1 = temp1->next;
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
	t_list *node1, *node2, *node3, *node4, *node5, *node6, *node7, *node8;


	node1 = (t_list *)malloc(sizeof(t_list));
	node2 = (t_list *)malloc(sizeof(t_list));
	node3 = (t_list *)malloc(sizeof(t_list));	
	node4 = (t_list *)malloc(sizeof(t_list));

	node1->data = "ciaoz";
	node1->next = node2;

	node2->data = "ciaoa";
	node2->next = node3;

	node3->data = "0";
	node3->next =  node4;

	node4->data = "ciaou";
	node4->next = NULL;

	node5 = (t_list *)malloc(sizeof(t_list));
	node6 = (t_list *)malloc(sizeof(t_list));
	node7 = (t_list *)malloc(sizeof(t_list));	
	node8 = (t_list *)malloc(sizeof(t_list));

	node5->data = "2";
	node5->next = node6;

	node6->data = "3";
	node6->next = node7;

	node7->data = "7";
	node7->next =  node8;

	node8->data = "ciao0";
	node8->next = NULL;



	printf("First list : \n");
	ft_print_list(node1);
	printf("\n");
	printf("Second List : \n");
	ft_print_list(node5);
	printf("\n");
	printf("Apply function \n\n");
	ft_sorted_list_merge(&node1,node5, cmp);
	printf("Merged lists sorted in ascending order: \n");
	ft_print_list(node1);

}*/

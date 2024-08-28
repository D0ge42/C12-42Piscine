/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lonulli <lonulli@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:46:36 by lonulli           #+#    #+#             */
/*   Updated: 2024/08/28 15:46:37 by lonulli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*end;
	t_list	*end_finder;
	t_list	*start;
	void	*temp;

	start = begin_list;
	while (start->next)
		start = start->next;
	end = start;
	start = begin_list;
	while (start != end && start->next != end)
	{
		temp = start->data;
		start->data = end->data;
		end->data = temp;
		end_finder = start;
		while (end_finder->next != end)
			end_finder = end_finder->next;
		end = end_finder;
		start = start->next;
	}
	begin_list = start;
}
/*void ft_print_list(t_list *begin_list)
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

	node3->data = "0";
	node3->next =  node4;

	node4->data = "1";
	node4->next = NULL;

	ft_print_list(node1);
	ft_list_reverse_fun(node1);
	ft_print_list(node1);

}*/

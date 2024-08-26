/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lonulli <lonulli@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 19:40:44 by lonulli           #+#    #+#             */
/*   Updated: 2024/08/26 19:41:16 by lonulli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*current;
	t_list	*next;
	t_list	*prev;

	next = 0;
	prev = 0;
	current = *begin_list;
	while (current)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*begin_list = prev;
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

	node2->data = "daje2";
	node2->next =  node3;

	node3->data = "sium";
	node3->next = NULL;

	ft_list_reverse(&node1); //Put this before and after the while loop to test the function.
	while(node1)
	{
		printf("%s\n",(char*)node1->data);
		node1 = node1->next;
	}
}*/

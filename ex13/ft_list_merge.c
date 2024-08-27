/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lonulli <lonulli@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:22:38 by lonulli           #+#    #+#             */
/*   Updated: 2024/08/27 16:22:40 by lonulli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Reach end of the begin_list1;
//Make it so the last element points to begin_list2;
#include "ft_list.h"
#include <stdio.h>

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*list;

	list = *begin_list1;
	while (list->next)
		list = list->next;
	list->next = begin_list2;
}

/*void ft_print_list(t_list *list)
{
	while(list)
	{
		printf("%s -> ", (char *)list->data);
		list = list->next;
	}
	printf("NULL\n");
}

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

int main()
{
	char *node1 = "sium";
	char *node2 = "daje";
	char *node3 = "perchè no";
	char *list2data = "casareccio";
	
	t_list *list2 = ft_create_elem(list2data);

	t_list *list = ft_create_elem(node1);
	list->next = ft_create_elem(node2);
	list->next->next = ft_create_elem(node3);

	ft_print_list(list);
	ft_list_merge(&list, list2);

	ft_print_list(list);
}*/

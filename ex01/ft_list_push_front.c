/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 18:22:10 by lorenzo           #+#    #+#             */
/*   Updated: 2024/08/22 22:08:58 by lorenzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//If begin not NULL we create a new t_list element with the previous function.
//We then assign it's pointer to the (old) first element of the list.
//The initial pointer of the list will now be the newly created element.

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new;

	if (*begin_list)
	{
		new = ft_create_elem(data);
		new -> next = *begin_list;
		*begin_list = new;
	}
	else
		*begin_list = ft_create_elem(data);
}
/*#include <stdio.h>
void print_list(t_list *list)
{
	while(list != NULL)
	{
		printf("%s\n", (char *)list->data);
		list = list->next;
	}
}

int main()
{
	t_list *my_list = NULL;
	ft_list_push_front(&my_list, "World");
	ft_list_push_front(&my_list, "Hello");

	printf("List after pushing elements:\n");
	print_list(my_list);
}*/

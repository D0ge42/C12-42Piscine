/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lonulli <lonulli@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 23:22:18 by lonulli           #+#    #+#             */
/*   Updated: 2024/08/26 23:22:19 by lonulli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//"Hello" -> "World" -> "42"
//"Hello" -> "42"

#include "ft_list.h"
#include <string.h>
#include <stdio.h>

void	ft_list_remove_if(t_list **begin_list,
		void *data_ref, int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*ptr;
	t_list	*tmp;

	ptr = *begin_list;
	tmp = NULL;
	while (ptr && ptr->next)
	{
		if ((*cmp)((ptr)->next->data, data_ref) == 0)
		{
			tmp = ptr->next;
			(*free_fct)(tmp->data);
			ptr->next = ptr->next->next;
			free(tmp);
		}
		ptr = ptr->next;
	}
	ptr = *begin_list;
	if (ptr && (*cmp)(ptr->data, data_ref) == 0)
	{
		*begin_list = ptr->next;
		(*free_fct)(ptr->data);
		free(ptr);
	}
}
/*int cmp_(void *a, void *b)
{
	return strcmp((char *)a, (char *)b);
}

void ft_print_list(t_list *begin_list)
{
	while(begin_list)
	{
		printf("%s ->", (char *)begin_list->data);
		begin_list = begin_list->next;
	}
	printf("NULL\n");
}

void free_data(void *data)
{
	free(data);
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
	char *data1 = strdup("hello");	
	char *data2 = strdup("World");	
	char *data3 = strdup("daje");	
	char *data4 = strdup("roma");

	t_list *list = ft_create_elem(data1);
	list->next = ft_create_elem(data2);
	list->next->next = ft_create_elem(data3);
	list->next->next->next = ft_create_elem(data4);

	char *data_ref = "daje";

	printf("Lista prima: ");
	ft_print_list(list);

	ft_list_remove_if(&list,data_ref, cmp_, free_data);

	printf("Lista dopo: ");
	ft_print_list(list);
}*/

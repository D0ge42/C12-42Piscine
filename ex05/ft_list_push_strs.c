/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 12:25:09 by lorenzo           #+#    #+#             */
/*   Updated: 2024/08/23 15:04:54 by lorenzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
//Create a new list that includes all string pointed by the element in strs.

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list *new = (t_list *)malloc(sizeof(t_list));
	new -> data = *strs;
	t_list *new2 = ft_create_elem(strs[1]);
	new->next = new2;
	t_list *current = new;
	t_list *new3 = ft_create_elem(strs[2]);
	new2->next = new3;
	while(current)
	{
		printf("%s\n", (char*)current->data);
		printf("Questo nodo punta a %p\n", current->next);
		current = current->next;
	}
	return new;
}

int main()
{
	char *str[4] = {"ciao", "come", "stai", NULL};
	t_list *new = ft_list_push_strs(4,str);
}

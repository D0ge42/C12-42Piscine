/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 12:25:09 by lorenzo           #+#    #+#             */
/*   Updated: 2024/08/23 16:56:30 by lorenzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Possible Optimization to the code:
//Do it without the array of pointers. 
//Avoid second while loop to link one node to the other.
//Overwall it seems to work properly.
#include "ft_list.h"
#include <stdio.h>

t_list	*ft_list_push_strs(int size, char **strs)
{
	int		i;
	int		j;
	int		orig_size;
	t_list	**new;

	i = 0;
	j = 0;
	orig_size = size;
	new = (t_list **)malloc(sizeof(t_list) * size);
	if (!new)
		return (NULL);
	while (size > i)
	{
		new[j] = ft_create_elem(strs[size - 1]);
		if (!new[j])
			return (NULL);
		size--;
		j++;
	}
	while (i < orig_size - 1)
	{
		new[i]->next = new[i + 1];
		i++;
	}
	return (new[0]);
}

/*t_list *ft_list_push_strs(int size, char **strs)
{
	t_list *new_list = NULL;
	t_list *new_node;
	int	i = 0;
	while (i < size)
	{
		new_node = ft_create_elem(strs[i]);
		new_node->next = new_list; //Link the new node at the front of the list.
		new_list = new_node; //Update the head of the list;
		i++;
	}
	return new_list;
}*/

/*int main()
{
	char *str[7] = {"1", "2", "3","4","5","6", NULL};
	t_list *new = ft_list_push_strs(6,str);
	while(new)
	{
		printf("Data found at current node  %s\n", (char*)new->data);
		printf("Node pointing to	    %p\n", new->next);
		new = new->next;
	}
}*/

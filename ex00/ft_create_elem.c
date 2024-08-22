/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:27:03 by lorenzo           #+#    #+#             */
/*   Updated: 2024/08/22 18:10:45 by lorenzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

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
/*#include <stdio.h>
//Since we've a pointer to void, we decide which type of data to use.
//In this example i create an Int variable N, and pass its address to the previously created function.
//Inside printf we'll cast to (*int) and deference the pointer to int.
//We then use the arrow operator (since we're working with pointers to structures) to assign data_int to data.
int main()
{
	int	n = 42;
	t_list *data_int = ft_create_elem(&n);
	printf("Dato del nodo (int) : %d\n", *(int *)(data_int -> data));
}*/

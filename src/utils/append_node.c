/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   append_node.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: oznachki <oznachki@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/20 16:28:43 by oznachki      #+#    #+#                 */
/*   Updated: 2026/02/21 15:45:19 by oznachki      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	append_node(t_list **a, int num)
{
	t_list	*new_node;
	t_list	*last;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		print_error(a);
	new_node->data = num;
	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->index = -1;
	if (*a == NULL)
	{
		*a = new_node;
		return ;
	}
	last = *a;
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	new_node->prev = last;
}

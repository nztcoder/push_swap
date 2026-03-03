/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rotate.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: oznachki <oznachki@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/03 14:47:41 by oznachki      #+#    #+#                 */
/*   Updated: 2026/02/11 16:03:01 by oznachki      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// ROTATE
// Shift up all elements of stack a by 1.
// The first element becomes the last one.
void	rotate(t_list **head)
{
	t_list	*first;
	t_list	*last;

	if (!head || !(*head) || !(*head)->next)
		return ;
	first = *head;
	last = *head;
	while (last->next != NULL)
		last = last->next;
	*head = first->next;
	(*head)->prev = NULL;
	last->next = first;
	first->prev = last;
	first->next = NULL;
}

void	ra(t_list **a)
{
	rotate(a);
	write(1, "ra\n", 3);
}

void	rb(t_list **b)
{
	rotate(b);
	write(1, "rb\n", 3);
}

void	rr(t_list **a, t_list **b)
{
	rotate(a);
	rotate(b);
	write(1, "rr\n", 3);
}

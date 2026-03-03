/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   reverse_rotate.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: oznachki <oznachki@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/05 15:23:22 by oznachki      #+#    #+#                 */
/*   Updated: 2026/02/11 16:04:03 by oznachki      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// REVERSE ROTATE
// Shift down all elements of stack a by 1.
// The last element becomes the first one.
// HEAD -> [1] -> [2] -> [3] to  HEAD -> [3] -> [1] -> [2].
void	reverse_rotate(t_list **head)
{
	t_list	*last;
	t_list	*pre_last;

	if (!head || !(*head) || !(*head)->next)
		return ;
	last = *head;
	while (last->next != NULL)
		last = last->next;
	pre_last = last->prev;
	pre_last->next = NULL;
	last->prev = NULL;
	last->next = *head;
	(*head)->prev = last;
	*head = last;
}

void	rra(t_list **a)
{
	reverse_rotate(a);
	write(1, "rra\n", 4);
}

void	rrb(t_list **b)
{
	reverse_rotate(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_list **a, t_list **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	write(1, "rrr\n", 4);
}

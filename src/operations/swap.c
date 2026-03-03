/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: oznachki <oznachki@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/11 15:10:03 by oznachki      #+#    #+#                 */
/*   Updated: 2026/02/20 17:12:34 by oznachki      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// SWAP
// Swap the first 2 elements at the top of stack
// Do nothing if there is only one element or none
// HEAD -> 1 -> 2 -> 3    to   HEAD -> 2 -> 1 -> 3
void	swap(t_list **head)
{
	t_list	*first;
	t_list	*second;

	if (!head || !(*head) || !(*head)->next)
		return ;
	first = *head;
	second = first->next;
	first->next = second->next;
	*head = second;
	second->next = first;
	second->prev = NULL;
	first->prev = second;
	if (first->next != NULL)
		first->next->prev = first;
}

void	sa(t_list **a)
{
	swap(a);
	write(1, "sa\n", 3);
}

void	sb(t_list **b)
{
	swap(b);
	write(1, "sb\n", 3);
}

void	ss(t_list **a, t_list **b)
{
	swap(a);
	swap(b);
	write(1, "ss\n", 3);
}

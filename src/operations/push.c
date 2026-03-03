/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: oznachki <oznachki@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/02 16:57:29 by oznachki      #+#    #+#                 */
/*   Updated: 2026/02/10 15:10:45 by oznachki      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// PUSH b
// Take the first element at the top of a and put it at the top of b.
// Do nothing if a is empty
void	push(t_list **a, t_list **b)
{
	t_list	*push_node;
	t_list	*second;

	if (!a || !(*a))
		return ;
	push_node = *a;
	second = push_node->next;
	*a = second;
	if (second)
		second->prev = NULL;
	push_node->prev = NULL;
	push_node->next = *b;
	if (*b != NULL)
		(*b)->prev = push_node;
	*b = push_node;
}

void	pa(t_list **a, t_list **b)
{
	push(b, a);
	write(1, "pa\n", 3);
}

void	pb(t_list **a, t_list **b)
{
	push(a, b);
	write(1, "pb\n", 3);
}

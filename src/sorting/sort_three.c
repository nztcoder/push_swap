/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort_three.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: oznachki <oznachki@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/10 19:01:15 by oznachki      #+#    #+#                 */
/*   Updated: 2026/02/11 16:05:23 by oznachki      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// HEAD -> [x] -> [y] -> [z] -> NULL
//3 2 1 +
//3 1 2 + 
//1 3 2 +
//2 3 1 +
//2 1 3 +
//1 2 3 sorted
void	sort_three(t_list **a)
{
	int	top;
	int	mid;
	int	bot;

	top = (*a)->data;
	mid = (*a)->next->data;
	bot = (*a)->next->next->data;
	if (top > mid && top > bot)
		ra(a);
	else if (mid > top && mid > bot)
		rra(a);
	top = (*a)->data;
	mid = (*a)->next->data;
	if (top > mid)
		sa(a);
}

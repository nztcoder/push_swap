/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   index_radix.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: oznachki <oznachki@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/15 12:01:35 by oznachki      #+#    #+#                 */
/*   Updated: 2026/02/17 16:46:44 by oznachki      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	index_radix(t_list *a)
{
	t_list	*curr;
	t_list	*compare;
	int		rank;

	curr = a;
	while (curr)
	{
		compare = a;
		rank = 0;
		while (compare)
		{
			if (curr->data > compare->data)
				rank++;
			compare = compare->next;
		}
		curr->index = rank;
		curr = curr->next;
	}
}

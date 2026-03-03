/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   is_sorted.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: oznachki <oznachki@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/20 16:30:56 by oznachki      #+#    #+#                 */
/*   Updated: 2026/02/22 14:53:02 by oznachki      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_list *a)
{
	if (!a)
		return (1);
	while ((a)->next != NULL)
	{
		if ((a->data) > (a->next->data))
			return (0);
		a = a->next;
	}
	return (1);
}

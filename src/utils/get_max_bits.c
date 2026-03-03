/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_max_bits.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: oznachki <oznachki@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/17 18:16:39 by oznachki      #+#    #+#                 */
/*   Updated: 2026/02/22 14:50:55 by oznachki      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_max_bits(t_list *a)
{
	int	max;
	int	max_bits;

	if (!a)
		return (0);
	max = a->index;
	while (a)
	{
		if (max < a->index)
			max = a->index;
		a = a->next;
	}
	max_bits = 0;
	while (max > 0)
	{
		max_bits++;
		max = max >> 1;
	}
	return (max_bits);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   check_dublicates.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: oznachki <oznachki@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/18 17:51:09 by oznachki      #+#    #+#                 */
/*   Updated: 2026/02/22 14:51:04 by oznachki      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_dublicates(t_list *a, int num)
{
	while (a)
	{
		if (a->data == num)
			return (1);
		a = a->next;
	}
	return (0);
}

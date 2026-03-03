/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   free_list.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: oznachki <oznachki@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/20 16:54:02 by oznachki      #+#    #+#                 */
/*   Updated: 2026/02/22 14:52:48 by oznachki      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_list(t_list **a)
{
	t_list	*tmp;

	if (!a)
		return ;
	while (*a)
	{
		tmp = (*a)->next;
		free(*a);
		*a = tmp;
	}
}

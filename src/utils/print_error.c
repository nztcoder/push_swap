/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_error.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: oznachki <oznachki@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/20 17:04:28 by oznachki      #+#    #+#                 */
/*   Updated: 2026/02/20 17:11:41 by oznachki      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_error(t_list **a)
{
	if (a && *a)
		free_list(a);
	write (2, "Error\n", 6);
	exit(1);
}

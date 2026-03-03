/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   parsing.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: oznachki <oznachki@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/18 18:38:52 by oznachki      #+#    #+#                 */
/*   Updated: 2026/02/22 14:53:42 by oznachki      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	parsing(t_list **a, int argc, char *argv[])
{
	int		i;
	long	tmp;

	i = 1;
	while (i < argc)
	{
		if (is_valid(argv[i]) == 0)
			print_error(a);
		tmp = ft_atol(argv[i]);
		if (tmp < -2147483648 || tmp > 2147483647)
			print_error(a);
		if (check_dublicates(*a, (int)tmp) == 1)
			print_error(a);
		append_node(a, (int)tmp);
		i++;
	}
}

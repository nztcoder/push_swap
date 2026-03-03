/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: oznachki <oznachki@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/31 11:37:27 by oznachki      #+#    #+#                 */
/*   Updated: 2026/02/22 14:49:33 by oznachki      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	handle_sorting(t_list **a, t_list **b)
{
	int	size;

	size = ft_list_size(*a);
	if (is_sorted(*a) || size <= 1)
		return ;
	else if (size == 2)
		sa(a);
	else if (size == 3)
		sort_three(a);
	else if (size <= 5)
		sort_five(a, b);
	else
	{
		index_radix(*a);
		radix_sort(a, b);
	}
}

int	main(int argc, char *argv[])
{
	t_list	*a;
	t_list	*b;

	if (argc < 2)
		return (0);
	a = NULL;
	b = NULL;
	parsing(&a, argc, argv);
	handle_sorting(&a, &b);
	free_list(&a);
	free_list(&b);
	return (0);
}

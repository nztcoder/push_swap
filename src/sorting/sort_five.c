/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort_five.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: oznachki <oznachki@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/11 17:57:36 by oznachki      #+#    #+#                 */
/*   Updated: 2026/02/22 14:49:51 by oznachki      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_min_index(t_list *a)
{
	int		min_val;
	int		min_index;
	int		i;
	t_list	*tmp;

	if (!a)
		return (-1);
	tmp = a;
	min_val = tmp->data;
	min_index = 0;
	i = 0;
	while (tmp)
	{
		if (tmp->data < min_val)
		{
			min_val = tmp->data;
			min_index = i;
		}
		tmp = tmp->next;
		i++;
	}
	return (min_index);
}

int	ft_list_size(t_list *a)
{
	int	i;

	i = 0;
	while (a)
	{
		i++;
		a = a->next;
	}
	return (i);
}

void	move_min_to_top(t_list **a)
{
	int	min_index;
	int	size;
	int	moves;

	min_index = get_min_index(*a);
	size = ft_list_size(*a);
	if (min_index <= size / 2)
	{
		moves = min_index;
		while (moves > 0)
		{
			ra(a);
			moves--;
		}
	}
	else
	{
		moves = size - min_index;
		while (moves > 0)
		{
			rra(a);
			moves--;
		}
	}
}

void	sort_five(t_list **a, t_list **b)
{
	while (ft_list_size(*a) > 3)
	{
		move_min_to_top(a);
		pb(a, b);
	}
	sort_three(a);
	pa(a, b);
	pa(a, b);
}

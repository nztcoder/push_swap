/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: oznachki <oznachki@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/31 11:37:18 by oznachki      #+#    #+#                 */
/*   Updated: 2026/02/22 14:48:09 by oznachki      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	struct s_list	*prev;
	struct s_list	*next;
	int				data;
	int				index;
}					t_list;

void	swap(t_list **head);
void	sa(t_list **a);
void	sb(t_list **b);
void	ss(t_list **a, t_list **b);
void	push(t_list **a, t_list **b);
void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);
void	rotate(t_list **head);
void	ra(t_list **a);
void	rb(t_list **b);
void	rr(t_list **a, t_list **b);
void	reverse_rotate(t_list **head);
void	rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list **a, t_list **b);
void	sort_three(t_list **a);
int		get_min_index(t_list *a);
int		ft_list_size(t_list *a);
void	sort_five(t_list **a, t_list **b);
void	move_min_to_top(t_list **a);
int		get_max_bits(t_list *a);
void	index_radix(t_list *a);
void	radix_sort(t_list **a, t_list **b);
int		is_valid(char *str);
int		check_dublicates(t_list *a, int num);
long	ft_atol(char *str);
void	parsing(t_list **a, int argc, char *argv[]);
void	append_node(t_list **a, int num);
void	free_list(t_list **a);
void	print_error(t_list **a);
int		is_sorted(t_list *a);
void	handle_sorting(t_list **a, t_list **b);

#endif
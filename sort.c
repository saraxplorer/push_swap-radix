/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/27 14:58:26 by rshaheen      #+#    #+#                 */
/*   Updated: 2024/03/29 16:24:02 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(t_stack **a, t_stack **b)
{
	int	biggest_index;
	int	max_bits;
	int	i;
	int	j;

	biggest_index = max_index(*a);
	max_bits = find_bits(biggest_index);
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j <= biggest_index)
		{
			if (((*a)->index >> i & 1) == 1)
				ft_ra(a, 0);
			else
				ft_pb(a, b, 0);
			j++;
		}
		while (*b)
			ft_pa(a, b, 0);
		i++;
	}
}

void	sort_five(t_stack **a, t_stack **b)
{
	int	size;

	size = count_nodes(*a);
	while (size--)
	{
		if ((*a)->index == 0 || (*a)->index == 1)
			ft_pb(a, b, 0);
		else
			ft_ra(a, 0);
	}
	sort_three(a);
	ft_pa(a, b, 0);
	ft_pa(a, b, 0);
	if ((*a)->index > (*a)->next->index)
		ft_sa(a, 0);
}

void	sort_three(t_stack **a)
{
	int	max;

	max = max_index(*a);
	if ((*a)->index == max)
		ft_ra(a, 0);
	else if ((*a)->next->index == max)
		ft_rra(a, 0);
	if ((*a)->index > (*a)->next->index)
		ft_sa(a, 0);
}

void	ft_sort(t_stack **a, t_stack **b)
{
	int	size;

	size = count_nodes(*a);
	if (size == 2)
		ft_sa(a, 0);
	else if (size == 3)
		sort_three(a);
	else if (size <= 5)
		sort_five(a, b);
	else if (!ft_checksorted(a))
		radix_sort(a, b);
	else
	{
		ft_freestack(a);
		ft_freestack(b);
	}
}

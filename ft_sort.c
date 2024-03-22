#include "push_swap.h"

void	ft_sort(t_stack **a, t_stack **b)
{
	int	size;

	size = count_nodes(*a);
	if (!ft_checksorted(*a) && size == 2)
		ft_sorting_2_numbers(a);
	else if (!ft_checksorted(*a) && size == 3)
		ft_sort_3(a);
	else if (!ft_checksorted(*a) && size <= 5)
		ft_sorting_5_numbers(a, b);
	else if (!ft_checksorted(*a))
		ft_radix_sorting(a, b);
	else
	{
		ft_freestack(a);
		ft_freestack(b);
	}
}

void	ft_sort_3(t_stack **a)
{
	if (ft_min(*a) == (*a)->nbr)
	{
		ft_rra(a, 0);
		ft_sa(a, 0);
	}
	else if (ft_max(*a) == (*a)->nbr)
	{
		ft_ra(a, 0);
		if (!ft_checksorted(*a))
			ft_sa(a, 0);
	}
	else
	{
		if (ft_index(*a, ft_max(*a)) == 1)
			ft_rra(a, 0);
		else
			ft_sa(a, 0);
	}
}
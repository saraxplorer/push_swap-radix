#include "push_swap.h"

void	ft_radix_sorting(t_stack **stack_a, t_stack **stack_b)
{
	int	max_index;
	int	max_bits;
	int	i;
	int	j;

	max_index = ft_find_max_index(*stack_a);
	max_bits = find_bits(max_index);
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j <= max_index)
		{
			if (((*stack_a)->index >> i) & 1)
				ft_ra(stack_a, 0);
			else
				ft_pb(stack_a, stack_b, 0);
			j++;
		}
		while (*stack_b != NULL)
			ft_pa(stack_b, stack_a, 0);
		i++;
	}
}

void	ft_sorting_5_numbers(t_stack **stack_a, t_stack **stack_b)
{
	int	nb_nodes;

	nb_nodes = node_counter(*stack_a);
	while (nb_nodes--)
	{
		if ((*stack_a)->index == 0 || (*stack_a)->index == 1)
			ft_pb(stack_a, stack_b, 0);
		else
			ft_ra(stack_a, 0);
	}
	ft_sort_3(stack_a);
	ft_pa(stack_a, stack_b, 0);
	ft_pa(stack_a, stack_b, 0);
	if ((*stack_a)->index > (*stack_a)->next->index)
		ft_sa(stack_a, 0);
}

void	ft_sorting_4_numbers(t_stack **stack_a, t_stack **stack_b)
{
	int	nodes;

	nodes = node_counter(*stack_a);
	while (nodes)
	{
		if ((*stack_a)->index == 0)
			ft_pb(stack_a, stack_b, 0);
		else
			ft_ra(stack_a, 0);
		nodes--;
	}
	ft_sort_3(stack_a);
	ft_pa(stack_b, stack_a, 0);
}

void	ft_sorting_3_numbers(t_stack **stack)
{
	int		number_a;
	int		number_b;
	int		number_c;
	t_stack	*temp;

	temp = (*stack);
	number_a = (temp)->nbr;
	number_b = (temp)->next->nbr;
	number_c = (temp)->next->next->nbr;
	if (number_a > number_b && number_a < number_c)
		ft_sa(stack, 0);
	else if (number_a > number_c && number_b < number_c)
		ft_ra(stack, 0);
	else if (number_a > number_c && number_b > number_c && number_a < number_b)
		ft_rra(stack, 0);
	else if (number_a > number_c && number_b > number_c && number_a > number_b)
	{
		ft_ra(stack, 0);
		ft_sa(stack, 0);
	}
	else if (number_a < number_c && number_b > number_c && number_a < number_b)
	{
		ft_rra(stack, 0);
		ft_sa(stack, 0);
	}
}

void	ft_sorting_2_numbers(t_stack **stack)
{
	if ((*stack)->nbr > (*stack)->next->nbr)
	{
		ft_sa(stack, 0);
	}
}

void	sort_five(t_stack **stack_a, t_stack **stack_b)
{
	int	size;

	size = count_nodes(*stack_a);
	while (size--)
	{
		if ((*stack_a)->index == 0 || (*stack_a)->index == 1)
			ft_pb(stack_a, stack_b, 0);
		else
			ft_ra(stack_a, 0);
	}
	ft_sort_3(stack_a);
	ft_pa(stack_a, stack_b, 0);
	ft_pa(stack_a, stack_b, 0);
	if ((*stack_a)->index > (*stack_a)->next->index)
		ft_sa(stack_a, 0);
}
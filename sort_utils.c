#include "push_swap.h"

int	ft_index(t_stack *a, int x)
{
	int	i;

	i = 0;
	while (a->nbr != x)
	{
		i++;
		a = a->next;
	}
	a->index = 0;
	return (i);
}

int	ft_min(t_stack *a)
{
	int	i;

	i = a->nbr;
	while (a)
	{
		if (a->nbr < i)
			i = a->nbr;
		a = a->next;
	}
	return (i);
}

int	ft_max(t_stack *a)
{
	int	i;

	i = a->nbr;
	while (a)
	{
		if (a->nbr > i)
			i = a->nbr;
		a = a->next;
	}
	return (i);
}
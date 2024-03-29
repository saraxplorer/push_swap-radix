/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/27 16:43:34 by rshaheen      #+#    #+#                 */
/*   Updated: 2024/03/29 16:22:51 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_checksorted(t_stack **a)
{
	t_stack	*tmp;

	tmp = *a;
	while (tmp && tmp->next)
	{
		if (tmp->index > tmp->next->index)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int	count_nodes(t_stack *head)
{
	int	i;

	i = 0;
	while (head != NULL)
	{
		head = head->next;
		i++;
	}
	return (i);
}

int	max_index(t_stack *a)
{
	int		max_index;
	t_stack	*tmp;

	max_index = -1;
	tmp = a;
	while (tmp != NULL)
	{
		if (tmp->index > max_index)
			max_index = tmp->index;
		tmp = tmp->next;
	}
	return (max_index);
}

int	find_bits(int biggest_nbr)
{
	int	max_bits;

	max_bits = 0;
	while (biggest_nbr > 0)
	{
		biggest_nbr >>= 1;
		max_bits++;
	}
	return (max_bits);
}

void	set_index(t_stack *a, int stack_size)
{
	t_stack	*find_max;
	t_stack	*tmp;

	while (stack_size > 0)
	{
		stack_size--;
		find_max = NULL;
		tmp = a;
		while (tmp != NULL)
		{
			if ((tmp->index == 0) && (find_max == NULL
					|| tmp->nbr > find_max->nbr))
				find_max = tmp;
			tmp = tmp->next;
		}
		if (find_max != NULL)
			find_max->index = stack_size;
	}
}

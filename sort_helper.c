#include "push_swap.h"

int	node_counter(t_stack *stack)
{
	t_stack		*temp;
	int			counter;

	counter = 0;
	temp = stack;
	while (temp != NULL)
	{
		counter++;
		temp = temp->next;
	}
	return (counter);
}

void	ft_set_index_to_stack(t_stack *head, int link_size)
{
	t_stack	*biggest;
	t_stack	*tmp;

	while (link_size-- > 0)
	{
		biggest = NULL;
		tmp = head;
		while (tmp)
		{
			if (!tmp->index && (biggest == NULL
					|| tmp->nbr > biggest->nbr))
				biggest = tmp;
			tmp = tmp->next;
		}
		if (biggest)
			biggest->index = link_size;
	}
}


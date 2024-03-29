/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   make_llist.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/31 20:12:35 by rshaheen      #+#    #+#                 */
/*   Updated: 2024/03/29 18:42:08 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*make_new_node(int num)
{
	t_stack	*new;

	new = ft_calloc(1, sizeof(t_stack));
	if (!new)
		return (NULL);
	new->nbr = num;
	new->index = 0;
	new->next = NULL;
	return (new);
}

bool	add_node(t_stack **a, int num)
{
	t_stack	*new;
	t_stack	*tmp;

	if (*a == NULL)
	{
		*a = make_new_node(num);
		if (*a == NULL)
			return (false);
		return (true);
	}
	tmp = *a;
	while (tmp->next != NULL)
		tmp = tmp->next;
	new = make_new_node(num);
	if (new == NULL)
		return (false);
	tmp->next = new;
	return (true);
}

t_stack	*make_llist(char **split, int argc)
{
	t_stack	*a;
	int		i;

	a = NULL;
	i = 0;
	while (split[i])
	{
		if (add_node(&a, ft_atoi(split[i])) == false)
		{
			write(1, "malloc failed\n", 14);
			break ;
		}
		i++;
	}
	if (argc == 2)
		ft_freestr(split);
	return (a);
}

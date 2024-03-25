/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   make_llist.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/31 20:12:35 by rshaheen      #+#    #+#                 */
/*   Updated: 2024/03/25 16:57:49 by rshaheen      ########   odam.nl         */
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

void	add_node(t_stack **a, int num)
{
	t_stack	*new;
	t_stack	*tmp;

	if (*a == NULL)
	{
		*a = make_new_node(num);
		return ;
	}
	tmp = *a;
	while (tmp->next != NULL)
		tmp = tmp->next;
	new = make_new_node(num);
	tmp->next = new;
}

t_stack	*make_llist(int argc, char **argv)
{
	t_stack	*a;
	char	**tmp;
	int		i;

	a = NULL;
	i = 0;
	if (argc == 2)
		tmp = ft_split(argv[1], ' ');
	else
		tmp = &argv[1];
	while (tmp[i])
	{
		add_node(&a, ft_atoi(tmp[i]));
		i++;
	}
	if (argc == 2)
		ft_freestr(tmp);
	return (a);
}

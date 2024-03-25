/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/31 20:09:41 by rshaheen      #+#    #+#                 */
/*   Updated: 2024/03/25 16:58:05 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	if (argc == 1 || (argc == 2 && argv[1][0] == '\0'))
		exit (1);
	check_input(argc, argv);
	a = make_llist(argc, argv);
	b = NULL;
	print_node(a);
	ft_set_index_to_stack(a, count_nodes(a));
	print_node(a);
	if (!ft_checksorted(a))
		ft_sort(&a, &b);
	print_node(a);
	ft_freestack(&a);
	ft_freestack(&b);
	return (0);
}

void print_node(t_stack *a)
{
	t_stack *tmp;
	tmp = a;
	while (tmp != NULL)
	{
		printf("%ld:node, %ld:index\n", tmp->nbr, tmp->index);
		tmp = tmp->next;
	}
}

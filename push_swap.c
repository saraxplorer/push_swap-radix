/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/31 20:09:41 by rshaheen      #+#    #+#                 */
/*   Updated: 2024/03/29 18:33:22 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	char	**split;

	if (argc < 2 || (argc == 2 && argv[1][0] == '\0')
		|| (argc == 2 && argv[1][1] == '\0'))
		return (1);
	split = check_input(argc, argv);
	a = make_llist(split, argc);
	b = NULL;
	set_index(a, count_nodes(a));
	if (!ft_checksorted(&a))
		ft_sort(&a, &b);
	ft_freestack(&a);
	ft_freestack(&b);
	return (0);
}

// void print_node(t_stack *a)
// {
// 	t_stack *tmp;
// 	tmp = a;
// 	while (tmp != NULL)
// 	{
// 		printf("%ld:node, %ld:index\n", tmp->nbr, tmp->index);
// 		tmp = tmp->next;
// 	}
// }

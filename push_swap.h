/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/31 15:49:03 by rshaheen      #+#    #+#                 */
/*   Updated: 2024/03/31 16:26:36 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>
# include <stdbool.h>
# include <limits.h>
# include "libft/libft.h"

# define INTMAX 2147483647
# define INTMIN -2147483648

typedef struct s_stack
{
	long			nbr;
	long			index;
	struct s_stack	*next;
}			t_stack;

void	print_error(void);
t_stack	*ft_1stlast(t_stack *lst);
char	**ft_freestr(char **str);
void	ft_freestack(t_stack **head);
int		ft_checksorted(t_stack **stack_a);
void	ft_sort(t_stack **a, t_stack **b);
void	ft_sa(t_stack **a, int j);
void	ft_ra(t_stack **a, int j);
void	ft_pa(t_stack **a, t_stack **b, int j);
void	ft_rr(t_stack **a, t_stack **b, int j);
void	ft_rra(t_stack **a, int j);
void	ft_sb(t_stack **b, int j);
void	ft_rb(t_stack **b, int j);
void	ft_pb(t_stack **a, t_stack **b, int j);
void	ft_rrb(t_stack **b, int j);
void	ft_ss(t_stack **a, t_stack **b, int j);
void	ft_rrr_a(t_stack **a, t_stack **b, int j);
void	ft_rrr_b(t_stack **b, int j);
void	set_index(t_stack *stack_a, int stack_size);
int		find_bits(int max_index);
int		count_nodes(t_stack *a);
t_stack	*make_llist(char **split, int argc);
void	sort_three(t_stack **a);
int		max_index(t_stack *a);
char	**check_input(int argc, char **argv);

#endif
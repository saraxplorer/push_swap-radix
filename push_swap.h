/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/31 15:49:03 by rshaheen      #+#    #+#                 */
/*   Updated: 2024/03/22 18:19:50 by rshaheen      ########   odam.nl         */
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

t_stack			*ft_make_llist(int argc, char **argv);
void			print_error(void);
t_stack			*quotation(char **argv);
int				ft_atoi2(const char *str);
void			ft_add_back(t_stack **stack, t_stack *stack_new);
t_stack			*ft_1stlast(t_stack *lst);
t_stack			*ft_stack_new(int content);
void			ft_freestr(char **lst);
int				ft_checkdup(t_stack *a);
void			ft_freestack(t_stack **head);
int				ft_checksorted(t_stack *stack_a);
void			ft_sort(t_stack **a, t_stack **b);
void			ft_sa(t_stack **a, int j);
void			ft_ra(t_stack **a, int j);
void			ft_pa(t_stack **a, t_stack **b, int j);
void			ft_rr(t_stack **a, t_stack **b, int j);
void			ft_rra(t_stack **a, int j);
void			ft_sb(t_stack **b, int j);
void			ft_rb(t_stack **b, int j);
void			ft_pb(t_stack **a, t_stack **b, int j);
void			ft_rrb(t_stack **b, int j);
void			ft_ss(t_stack **a, t_stack **b, int j);
void			ft_rrr_a(t_stack **a, t_stack **b, int j);
void			ft_rrr_b(t_stack **b, int j);
int				ft_max(t_stack *a);
int				ft_min(t_stack *a);
int				listsize(t_stack *lst);
int				ft_index(t_stack *a, int x);
int				ft_find_place_a(t_stack *a, int x);
int				ft_find_place_b(t_stack *b, int x);
int				ft_case_rarb_a(t_stack *a, t_stack *b, int x);
int				ft_case_rarrb_a(t_stack *a, t_stack *b, int x);
int				ft_case_rrarb_a(t_stack *a, t_stack *b, int x);
int				ft_case_rrarrb_a(t_stack *a, t_stack *b, int x);
int				ft_case_rarb(t_stack *a, t_stack *b, int c);
int				ft_case_rrarb(t_stack *a, t_stack *b, int c);
int				ft_case_rarrb(t_stack *a, t_stack *b, int c);
int				ft_case_rrarrb(t_stack *a, t_stack *b, int c);
int				ft_rarb_push(t_stack **a, t_stack **b, int c, char s);
int				ft_rrarrb_push(t_stack **a, t_stack **b, int c, char s);
int				ft_rrarb_push(t_stack **a, t_stack **b, int c, char s);
int				ft_rarrb_push(t_stack **a, t_stack **b, int c, char s);
int				ft_cheapest_rot_ab(t_stack *a, t_stack *b);
int				ft_cheapest_rot_ba(t_stack *a, t_stack *b);
void			check_int(const char *str);
long long int	convert_digits_to_int(const char *str);
void	ft_set_index_to_stack(t_stack *stack_a, int size_stack);
int	node_counter(t_stack *stack);
void	ft_radix_sorting(t_stack **stack_a, t_stack **stack_b);
int	ft_find_max_index(t_stack *stack);
int	find_bits(int max_index);
void	ft_sorting_5_numbers(t_stack **stack_a, t_stack **stack_b);
void	ft_sorting_4_numbers(t_stack **stack_a, t_stack **stack_b);
void	ft_sorting_3_numbers(t_stack **stack);
void	ft_sorting_2_numbers(t_stack **stack);
int		count_nodes(t_stack *head);
void	ft_sort_3(t_stack **a);
void	sort_five(t_stack **stack_a, t_stack **stack_b);
int	check_doubles(char **argv);
int	check_digit(char *argv);
void	check_input(int argc, char **argv);
int	count_arg(char **array);
t_stack	*init_list(int argc, char **argv);
void	insert_at_tail(t_stack **head, int new_value);
t_stack	*make_new_node(int new_value);
void print_node(t_stack *a);




#endif
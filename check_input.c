/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   check_input.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/01 19:12:00 by rshaheen      #+#    #+#                 */
/*   Updated: 2024/03/25 16:07:34 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	ft_checksorted(t_stack *a)
{
	int	i;

	i = a->nbr;
	while (a)
	{
		if (i > a->nbr)
			return (0);
		i = a->nbr;
		a = a->next;
	}
	return (1);
}

int	check_num(char *argv)
{
	int	i;

	i = 0;
	if (argv[i] == '-')
		i++;
	while (argv[i])
	{
		if (!ft_isdigit(argv[i]))
			return (0);
		i++;
	}
	return (1);
}

int	arg_num(char **arg)
{
	int	i;

	i = 0;
	while (arg[i])
		i++;
	return (i);
}

int	check_duplicates(char **argv)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = arg_num(argv);
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	check_input(int argc, char **argv)
{
	int				i;
	long long int	tmp_num;
	char			**tmp_array;

	i = 0;
	if (argc == 2)
		tmp_array = ft_split(argv[1], ' ');
	else
		tmp_array = &argv[1];
	while (tmp_array[i])
	{
		tmp_num = ft_atol(tmp_array[i]);
		if (tmp_num < INTMIN || tmp_num > INTMAX)
			print_error();
		if (check_duplicates(tmp_array))
			print_error();
		if (!check_num(tmp_array[i]))
			print_error();
		i++;
	}
	if (argc == 2)
		ft_freestr (tmp_array);
}


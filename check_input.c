/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   check_input.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/01 19:12:00 by rshaheen      #+#    #+#                 */
/*   Updated: 2024/03/29 18:41:47 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_num(char *argv, char **split)
{
	int	i;

	i = 0;
	if (((argv[i]) == '-' || argv[i] == '+') && ft_strlen(&argv[i]) == 1)
		print_error(split);
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

char	**check_input(int argc, char **argv)
{
	int				i;
	long long int	tmp_num;
	char			**split;

	i = 0;
	split = NULL;
	if (argc == 2)
		split = ft_split(argv[1], ' ');
	else
		split = &argv[1];
	if (split == NULL)
		exit(EXIT_FAILURE);
	while (split[i])
	{
		if (!check_num(split[i], split))
			print_error(split);
		tmp_num = ft_atol(split[i]);
		if (tmp_num < INTMIN || tmp_num > INTMAX)
			print_error(split);
		if (check_duplicates(split))
			print_error(split);
		i++;
	}
	return (split);
}

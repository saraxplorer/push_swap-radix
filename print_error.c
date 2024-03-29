/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_error.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/02 20:29:39 by rshaheen      #+#    #+#                 */
/*   Updated: 2024/03/29 18:37:19 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_error(char **split)
{
	ft_freestr(split);
	write (2, "Error\n", 6);
	exit(1);
}

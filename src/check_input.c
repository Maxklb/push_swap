/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:13:43 by makoch-l          #+#    #+#             */
/*   Updated: 2024/05/08 19:10:58 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	arg_is_number(char *arg)
{
	int i;

	i = 0;
	if (ft_is_sign(arg[i]) && arg[i + 1] != '\0')
		i++;
	while (arg[i] && ft_is_digit(arg[i]))
		i++;
	if (arg[i] != '\0' && !ft_is_digit(arg[i]))
		return (0);
	return (1);
}

int	arg_has_duplicates(char **args, int size)
{
	int i;
	int j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_atoi(args[i]) == ft_atoi(args[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
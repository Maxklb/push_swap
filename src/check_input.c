/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:13:43 by makoch-l          #+#    #+#             */
/*   Updated: 2024/05/22 17:50:41 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int	arg_is_number(char *arg)
{
	int	i;

	i = 0;
	if (ft_is_sign(arg[i]) && arg[i + 1] != '\0')
		i++;
	while (arg[i] && ft_is_digit(arg[i]))
		i++;
	if (arg[i] != '\0' && !ft_is_digit(arg[i]))
		return (0);
	return (1);
}

static int	arg_has_duplicates(char **args)
{
	int	i;
	int	j;

	i = 0;
	while (args[i])
	{
		j = 1;
		while (args[j])
		{
			if (i != j && ft_nb_str_cmp(args[i], args[j]) == 0)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

static int	arg_is_zero(char *arg)
{
	int	i;

	i = 0;
	if (ft_is_sign(arg[i]))
		i++;
	while (arg[i] && arg[i] == '0')
		i++;
	if (arg[i] != '\0')
		return (0);
	return (1);
}

int	ft_is_valid_input(char **args)
{
	int	i;

	i = 0;
	while (args[i])
	{
		if (!arg_is_number(args[i]))
			return (0);
		if (arg_is_zero(args[i]))
			return (0);
		i++;
	}
	if (arg_has_duplicates(args))
		return (0);
	return (1);
}

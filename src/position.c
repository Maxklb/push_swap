/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 16:34:30 by makoch-l          #+#    #+#             */
/*   Updated: 2024/05/30 12:37:46 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/*static void	get_position(t_stack **stack)
{
	t_stack	*tmp;
	int		i;

	i = 0;
	tmp = *stack;
	while (tmp)
	{
		tmp->i = i;
		tmp = tmp->next;
		i++;
	}
}*/

int	lowest_i_value(t_stack **stack)
{
	t_stack	*tmp;
	int		lowest_i;

	lowest_i = 0;
	tmp = *stack;
	while (tmp)
	{
		if (tmp->i < lowest_i)
			lowest_i = tmp->i;
		tmp = tmp->next;
	}
	return (lowest_i);
}
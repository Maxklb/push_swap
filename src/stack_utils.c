/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 17:55:57 by makoch-l          #+#    #+#             */
/*   Updated: 2024/05/15 18:57:50 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_stack	*first_stack_element(t_stack *stack)
{
	while (stack && stack->next != NULL)
		stack = stack->next;
	return (stack);
}

int	get_stack_size(t_stack *stack)
{
	int	i;

	i = 0;
	if (stack == NULL)
		return (0);
	while (stack)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}

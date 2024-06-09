/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 17:51:52 by makoch-l          #+#    #+#             */
/*   Updated: 2024/06/09 23:09:11 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_stack	*create_node(int value)
{
	t_stack	*node;

	node = malloc(sizeof * node);
	if (!node)
		return (NULL);
	node->number = value;
	node->i = 0;
	node->position = -1;
	node->trgt_pos = -1;
	node->move_cost_a = -1;
	node->move_cost_b = -1;
	node->next = NULL;
	return (node);
}

void	add_node(t_stack **stack, t_stack *node)
{
	t_stack	*tmp;

	if (!node)
		return ;
	if (!*stack)
	{
		*stack = node;
		return ;
	}
	tmp = first_stack_element(*stack);
	tmp->next = node;
}

t_stack	*create_stack(int ac, char **av)
{
	t_stack		*stack;
	long int	tmp;
	int			i;

	stack = NULL;
	tmp = 0;
	i = 1;
	while (i < ac)
	{
		tmp = ft_atoi(av[i]);
		if (tmp > INT_MAX || tmp < INT_MIN)
			exit_error(&stack, NULL);
		if (i == 1)
			stack = create_node((int)tmp);
		else
			add_node(&stack, create_node((int)tmp));
		i++;
	}
	return (stack);
}

void	set_index(t_stack *stack_a, int stack_size)
{
	t_stack	*ptr;
	t_stack	*highest;
	int		value;

	while (--stack_size > 0)
	{
		ptr = stack_a;
		value = INT_MIN;
		highest = NULL;
		while (ptr)
		{
			if (ptr->number == INT_MIN && ptr->i == 0)
				ptr->i = 1;
			if (ptr->number > value && ptr->i == 0)
			{
				value = ptr->number;
				highest = ptr;
				ptr = stack_a;
			}
			else
				ptr = ptr->next;
		}
		if (highest != NULL)
			highest->i = stack_size;
	}
}

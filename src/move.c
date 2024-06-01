/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 15:03:04 by makoch-l          #+#    #+#             */
/*   Updated: 2024/06/01 18:46:14 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	rev_rot_both(t_stack **a, t_stack **b, int *cost_a, int *cost_b)
{
	while (*cost_a < 0 && *cost_b < 0)
	{
		(*cost_a)++;
		(*cost_b)++;
		reverse_rotate_stack(a, b);
	}
}

static void	rot_both(t_stack **a, t_stack **b, int *cost_a, int *cost_b)
{
	while (*cost_a > 0 && *cost_b > 0)
	{
		(*cost_a)--;
		(*cost_b)--;
		rotate_stack(a, b);
	}
}

static void	rot_a(t_stack **a, int *cost)
{
	while (*cost)
	{
		if (*cost > 0)
		{
			rotate_a(a);
			(*cost)--;
		}
		else if (*cost < 0)
		{
			reverse_rotate_a(a);
			(*cost)++;
		}
	}
}

static void	rot_b(t_stack **b, int *cost)
{
	while (*cost)
	{
		if (*cost > 0)
		{
			rotate_b(b);
			(*cost)--;
		}
		else if (*cost < 0)
		{
			reverse_rotate_b(b);
			(*cost)++;
		}
	}
}

void	move(t_stack **a, t_stack **b, int cost_a, int cost_b)
{
	if (cost_a < 0 && cost_b < 0)
		rev_rot_both(a, b, &cost_a, &cost_b);
	else if (cost_a > 0 && cost_b > 0)
		rot_both(a, b, &cost_a, &cost_b);
	rot_a(a, &cost_a);
	rot_b(b, &cost_b);
	push_a(a, b);
}

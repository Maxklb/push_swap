/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 13:37:04 by makoch-l          #+#    #+#             */
/*   Updated: 2024/05/21 17:30:09 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	push_a_to_b_except_three(t_stack **stack_a, t_stack	**stack_b)
{
	int		stack_size;
	int		number;
	int		i;

	number = 0;
	i = 0;
	stack_size = get_stack_size(*stack_a);
	while(stack_size > 6 && i < stack_size && number < stack_size / 2)
	{
		if ((*stack_a)->i <= stack_size / 2)
		{
			push_b(stack_a, stack_b);
			number++;
		}
		else
			rotate_a(stack_a);
		i++;
	}
	while (stack_size - number > 3)
	{
		push_b(stack_a, stack_b);
		number++;
	}
}

int main()
{
	t_stack *stack_a = NULL;
	t_stack *stack_b = NULL;

	t_stack *node1 = malloc(sizeof(t_stack));
    node1->number = 1;
    node1->i = 0;
    node1->next = NULL;
    stack_a = node1;

    t_stack *node2 = malloc(sizeof(t_stack));
    node2->number = 2;
    node2->i = 1;
    node2->next = stack_a;
    stack_a = node2;

    t_stack *node3 = malloc(sizeof(t_stack));
    node3->number = 3;
    node3->i = 2;
    node3->next = stack_a;
    stack_a = node3;

	t_stack *node4 = malloc(sizeof(t_stack));
	node4->number = 4;
	node4->i = 3;
	node4->next = stack_a;
	stack_a = node4;

	t_stack *node5 = malloc(sizeof(t_stack));
	node5->number = 5;
	node5->i = 4;
	node5->next = stack_a;
	stack_a = node5;

	t_stack *node6 = malloc(sizeof(t_stack));
	node6->number = 6;
	node6->i = 5;
	node6->next = stack_a;
	stack_a = node6;

	t_stack *node7 = malloc(sizeof(t_stack));
	node7->number = 7;
	node7->i = 6;
	node7->next = stack_a;
	stack_a = node7;

	printf("Stack A before :\n");
	print_stack(stack_a);

	push_a_to_b_except_three(&stack_a, &stack_b);

	printf("Stack A after :\n");
	print_stack(stack_a);

	printf("Stack B after :\n");
	print_stack(stack_b);
}
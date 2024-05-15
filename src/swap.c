/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 16:15:44 by makoch-l          #+#    #+#             */
/*   Updated: 2024/05/15 18:56:55 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	swap(t_stack *stack)
{
	int	tmp;

	if (!stack || !stack->next)
		return ;
	tmp = stack->number;
	stack->number = stack->next->number;
	stack->next->number = tmp;
	tmp = stack->i;
	stack->i = stack->next->i;
	stack->next->i = tmp;
}

void	swap_a(t_stack **stack_a)
{
	swap(*stack_a);
	ft_putstr("sa\n");
}

void	swap_b(t_stack **stack_b)
{
	swap(*stack_b);
	ft_putstr("sb\n");
}

void	swap_stack(t_stack **stack_a, t_stack **stack_b)
{
	swap(*stack_a);
	swap(*stack_b);
	ft_putstr("ss\n");
}

/*int main() 
{
    // Creating a sample stack
    t_stack *stack_a = NULL;
    t_stack *stack_b = NULL;

    // Pushing elements into stack_a
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

    // Pushing elements into stack_b
    t_stack *node4 = malloc(sizeof(t_stack));
    node4->number = 4;
    node4->i = 0;
    node4->next = NULL;
    stack_b = node4;

    t_stack *node5 = malloc(sizeof(t_stack));
    node5->number = 5;
    node5->i = 1;
    node5->next = stack_b;
    stack_b = node5;

	t_stack	*node6 = malloc(sizeof(t_stack));
	node6->number = 6;
	node6->i = 2;
	node6->next = stack_b;
	stack_b = node6;

    // Before swapping
    printf("Before swap_a:\n");
    printf("stack_a: %d %d %d\n", stack_a->number, stack_a->next->number, stack_a->next->next->number);
    printf("stack_b: %d %d %d\n", stack_b->number, stack_b->next->number, stack_b->next->next->number);

    // Testing swap_a
    swap_a(&stack_a);

    // After swapping
    printf("After swap_a:\n");
    printf("stack_a: %d %d %d\n", stack_a->number, stack_a->next->number, stack_a->next->next->number);
    printf("stack_b: %d %d %d\n", stack_b->number, stack_b->next->number, stack_b->next->next->number);

	// Before swapping
    printf("Before swap_b:\n");
    printf("stack_a: %d %d %d\n", stack_a->number, stack_a->next->number, stack_a->next->next->number);
    printf("stack_b: %d %d %d\n", stack_b->number, stack_b->next->number, stack_b->next->next->number);

    // Testing swap_b
    swap_b(&stack_b);

	// After swapping
    printf("After swap_b:\n");
    printf("stack_a: %d %d %d\n", stack_a->number, stack_a->next->number, stack_a->next->next->number);
    printf("stack_b: %d %d %d\n", stack_b->number, stack_b->next->number, stack_b->next->next->number);

	// Before swapping
    printf("Before swap_stack:\n");
    printf("stack_a: %d %d %d\n", stack_a->number, stack_a->next->number, stack_a->next->next->number);
    printf("stack_b: %d %d %d\n", stack_b->number, stack_b->next->number, stack_b->next->next->number);

    // Testing swap_stack
    swap_stack(&stack_a, &stack_b);

	// After swapping
    printf("After swap_stack:\n");
    printf("stack_a: %d %d %d\n", stack_a->number, stack_a->next->number, stack_a->next->next->number);
    printf("stack_b: %d %d %d\n", stack_b->number, stack_b->next->number, stack_b->next->next->number);

    return 0;
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 18:36:15 by makoch-l          #+#    #+#             */
/*   Updated: 2024/05/15 19:04:47 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	rotate(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*last;

	tmp = *stack;
	*stack = (*stack)->next;
	last = first_stack_element(*stack);
	tmp->next = NULL;
	last->next = tmp;
}

void	rotate_a(t_stack **stack_a)
{
	rotate(stack_a);
	ft_putstr("ra\n");
}

void	rotate_b(t_stack **stack_b)
{
	rotate(stack_b);
	ft_putstr("rb\n");
}

void	rotate_stack(t_stack **stack_a, t_stack **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	ft_putstr("rr\n");
}
/*
int main() 
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

    // Before rotating a
	printf("Before rotating\n");
	printf("stack_a: %d %d %d\n", stack_a->number, stack_a->next->number, stack_a->next->next->number);
	printf("stack_b: %d %d %d\n", stack_b->number, stack_b->next->number, stack_b->next->next->number);

	// Testing rotate_a
	rotate_a(&stack_a);

	// After rotating a
	printf("After rotating\n");
	printf("stack_a: %d %d %d\n", stack_a->number, stack_a->next->number, stack_a->next->next->number);
	printf("stack_b: %d %d %d\n", stack_b->number, stack_b->next->number, stack_b->next->next->number);

	// Before rotating b
	printf("Before rotating\n");
	printf("stack_a: %d %d %d\n", stack_a->number, stack_a->next->number, stack_a->next->next->number);
	printf("stack_b: %d %d %d\n", stack_b->number, stack_b->next->number, stack_b->next->next->number);

	// Testing rotate_b
	rotate_b(&stack_b);

	// After rotating
	printf("After rotating\n");
	printf("stack_a: %d %d %d\n", stack_a->number, stack_a->next->number, stack_a->next->next->number);
	printf("stack_b: %d %d %d\n", stack_b->number, stack_b->next->number, stack_b->next->next->number);

	// Before rotating stacks
	printf("Before rotating stack\n");
	printf("stack_a: %d %d %d\n", stack_a->number, stack_a->next->number, stack_a->next->next->number);
	printf("stack_b: %d %d %d\n", stack_b->number, stack_b->next->number, stack_b->next->next->number);

	// Testing rotate_stacks
	rotate_stack(&stack_a, &stack_b);

	// After rotating stacks
	printf("After rotating stack\n");
	printf("stack_a: %d %d %d\n", stack_a->number, stack_a->next->number, stack_a->next->next->number);
	printf("stack_b: %d %d %d\n", stack_b->number, stack_b->next->number, stack_b->next->next->number);
}*/
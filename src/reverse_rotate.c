/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 18:36:35 by makoch-l          #+#    #+#             */
/*   Updated: 2024/05/20 17:55:24 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	reverse_rotate(t_stack **stack)
{
	t_stack	*tmp;

	tmp = *stack;
	while (tmp->next->next)
		tmp = tmp->next;
	tmp->next->next = *stack;
	*stack = tmp->next;
	tmp->next = NULL;
}

void	reverse_rotate_a(t_stack **stack_a)
{
	reverse_rotate(stack_a);
	ft_putstr("rra\n");
}

void	reverse_rotate_b(t_stack **stack_b)
{
	reverse_rotate(stack_b);
	ft_putstr("rrb\n");
}

void	reverse_rotate_stack(t_stack **stack_a, t_stack **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	ft_putstr("rrr\n");
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

    // Before reverse rotating a
	printf("Before reverse rotating\n");
	printf("stack_a: %d %d %d\n", stack_a->number, stack_a->next->number, stack_a->next->next->number);
	printf("stack_b: %d %d %d\n", stack_b->number, stack_b->next->number, stack_b->next->next->number);

	// Testing reverse rotate_a
	reverse_rotate_a(&stack_a);

	// After reverse rotating a
	printf("After reverse rotating\n");
	printf("stack_a: %d %d %d\n", stack_a->number, stack_a->next->number, stack_a->next->next->number);
	printf("stack_b: %d %d %d\n", stack_b->number, stack_b->next->number, stack_b->next->next->number);

	// Before reverse rotating b
	printf("Before reverse rotating\n");
	printf("stack_a: %d %d %d\n", stack_a->number, stack_a->next->number, stack_a->next->next->number);
	printf("stack_b: %d %d %d\n", stack_b->number, stack_b->next->number, stack_b->next->next->number);

	// Testing reverse rotate_b
	reverse_rotate_b(&stack_b);

	// After reverse rotating
	printf("After reverse rotating\n");
	printf("stack_a: %d %d %d\n", stack_a->number, stack_a->next->number, stack_a->next->next->number);
	printf("stack_b: %d %d %d\n", stack_b->number, stack_b->next->number, stack_b->next->next->number);

	// Before reverse rotating stacks
	printf("Before reverse rotating stack\n");
	printf("stack_a: %d %d %d\n", stack_a->number, stack_a->next->number, stack_a->next->next->number);
	printf("stack_b: %d %d %d\n", stack_b->number, stack_b->next->number, stack_b->next->next->number);

	// Testing reverse rotate stacks
	reverse_rotate_stack(&stack_a, &stack_b);

	// After reverse rotating stacks
	printf("After reverse rotating stack\n");
	printf("stack_a: %d %d %d\n", stack_a->number, stack_a->next->number, stack_a->next->next->number);
	printf("stack_b: %d %d %d\n", stack_b->number, stack_b->next->number, stack_b->next->next->number);
}*/
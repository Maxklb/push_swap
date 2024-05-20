/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 16:40:41 by makoch-l          #+#    #+#             */
/*   Updated: 2024/05/20 17:55:05 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	push(t_stack **src, t_stack **dst)
{
	t_stack	*tmp;

	if (!*src)
		return ;
	tmp = (*src)->next;
	(*src)->next = *dst;
	*dst = *src;
	*src = tmp;
}

void	push_a(t_stack **stack_a, t_stack **stack_b)
{
	push(stack_b, stack_a);
	ft_putstr("pa\n");
}

void	push_b(t_stack **stack_a, t_stack **stack_b)
{
	push(stack_a, stack_b);
	ft_putstr("pb\n");
}

/*int	main()
{
	// Creating a sample stack
	t_stack	*stack_a = NULL;
	t_stack	*stack_b = NULL;

	// Pushing elements into stack_a
	t_stack	*node1 = malloc(sizeof(t_stack));
	node1->number = 1;
	node1->i = 0;
	node1->next = NULL;
	stack_a = node1;

	t_stack	*node2 = malloc(sizeof(t_stack));
	node2->number = 2;
	node2->i = 1;
	node2->next = stack_a;
	stack_a = node2;

	t_stack	*node3 = malloc(sizeof(t_stack));
	node3->number = 3;
	node3->i = 2;
	node3->next = stack_a;
	stack_a = node3;

	// Pushing elements into stack_b
	t_stack	*node4 = malloc(sizeof(t_stack));
	node4->number = 4;
	node4->i = 0;
	node4->next = NULL;
	stack_b = node4;

	t_stack	*node5 = malloc(sizeof(t_stack));
	node5->number = 5;
	node5->i = 1;
	node5->next = stack_b;
	stack_b = node5;

	t_stack	*node6 = malloc(sizeof(t_stack));
	node6->number = 6;
	node6->i = 2;
	node6->next = stack_b;
	stack_b = node6;

	//Before push_a
	printf("Before push_a\n");
	printf("stack_a: %d %d %d\n", stack_a->number, stack_a->next->number, stack_a->next->next->number);
    printf("stack_b: %d %d %d\n", stack_b->number, stack_b->next->number, stack_b->next->next->number);
	
	//Testing push_a
	push_a(&stack_a, &stack_b);

	//After push_a
	printf("After push_a\n");
	printf("stack_a: %d %d %d %d\n", stack_a->number, stack_a->next->number, stack_a->next->next->number, stack_a->next->next->next->number);
	printf("stack_b: %d %d\n", stack_b->number, stack_b->next->number);

	//Before push_b
	printf("Before push_b\n");
	printf("stack_a: %d %d %d %d\n", stack_a->number, stack_a->next->number, stack_a->next->next->number, stack_a->next->next->next->number);
	printf("stack_b: %d %d\n", stack_b->number, stack_b->next->number);
    
	//Testing push_b
	push_b(&stack_a, &stack_b);

	//After push_b
	printf("After push_b\n");
	printf("stack_a: %d %d %d\n", stack_a->number, stack_a->next->number, stack_a->next->next->number);
	printf("stack_b: %d %d %d\n", stack_b->number, stack_b->next->number, stack_b->next->next->number);
	return (0);
}*/

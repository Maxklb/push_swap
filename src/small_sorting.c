/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sorting.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:26:34 by makoch-l          #+#    #+#             */
/*   Updated: 2024/05/24 17:52:06 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int find_highest_index(t_stack *stack)
{
	int i;

	i = stack->i;
	while(stack)
	{
		if(stack->i > i)
			i = stack->i;
		stack = stack->next;
	}
	return (i);
}

void small_sorting(t_stack **stack)
{
	int highest_index;
	
	// if (is_sorted(*stack))
	// 	return ;
	highest_index = find_highest_index(*stack);
	if ((*stack)->i == highest_index)
		rotate_a(stack);
	else if ((*stack)->next->i == highest_index)
		reverse_rotate_a(stack);
	if ((*stack)->i > (*stack)->next->i)
		swap_a(stack);
}

void print_stack(t_stack *stack) 
{
    while (stack) 
	{
        printf("%d ", stack->i);
        stack = stack->next;
    }
    printf("\n");
}

/*int main() 
{
	t_stack *stack_a = NULL;

	t_stack *node1 = malloc(sizeof(t_stack));
	node1->i = 1;
	node1->next = NULL;
	stack_a = node1;

	t_stack *node2 = malloc(sizeof(t_stack));
	node2->i = 3;
	node2->next = NULL;
	stack_a->next = node2;

	t_stack *node3 = malloc(sizeof(t_stack));
	node3->i = 2;
	node3->next = NULL;
	stack_a->next->next = node3;
	
	print_stack(stack_a);
	small_sorting(&stack_a);
	print_stack(stack_a);
	return 0;
}*/
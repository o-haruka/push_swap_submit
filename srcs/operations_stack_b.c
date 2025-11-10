/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_stack_b.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: homura <homura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:45:00 by homura            #+#    #+#             */
/*   Updated: 2025/11/10 17:13:52 by homura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include "../libft/stdio/ft_printf/ft_printf.h"

void	sb(t_node **b)
{
	t_node	*first;
	t_node	*second;

	if (!*b || !(*b)->next)
		return ;
	first = *b;
	second = (*b)->next;
	first->next = second->next;
	second->next = first;
	*b = second;
	ft_printf("sb\n");
}

void	rb(t_node **b)
{
	t_node	*first;
	t_node	*cur;

	if (!*b || !(*b)->next)
		return ;
	first = *b;
	cur = *b;
	while (cur->next)
		cur = cur->next;
	*b = first->next;
	first->next = NULL;
	cur->next = first;
	ft_printf("rb\n");
}

void	rrb(t_node **b)
{
	t_node	*cur;
	t_node	*prev;

	if (!*b || !(*b)->next)
		return ;
	cur = *b;
	prev = NULL;
	while (cur->next)
	{
		prev = cur;
		cur = cur->next;
	}
	prev->next = NULL;
	cur->next = *b;
	*b = cur;
	ft_printf("rrb\n");
}

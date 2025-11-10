/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: homura <homura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:52:59 by homura            #+#    #+#             */
/*   Updated: 2025/11/10 16:39:28 by homura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include "../libft/stdio/ft_printf/ft_printf.h"

// #include <stdio.h>
#include <stdlib.h>

//先頭2つの要素を入れ替える
void	sa(t_node **a)
{
	t_node	*first;
	t_node	*second;

	if (!*a || !(*a)->next)
		return ;
	first = *a;
	second = (*a)->next;
	first->next = second->next;
	second->next = first;
	*a = second;
	ft_printf("sa\n");
}

void	ra(t_node **a)
{
	t_node	*first;
	t_node	*cur;

	if (!*a || !(*a)->next)
		return ;
	first = *a;
	cur = *a;
	while (cur->next)
		cur = cur->next;
	*a = first->next;
	first->next = NULL;
	cur->next = first;
	ft_printf("ra\n");
}

void	rra(t_node **a)
{
	t_node	*cur;
	t_node	*prev;

	if (!*a || !(*a)->next)
		return ;
	cur = *a;
	prev = NULL;
	while (cur->next)
	{
		prev = cur;
		cur = cur->next;
	}
	prev->next = NULL;
	cur->next = *a;
	*a = cur;
	ft_printf("rra\n");
}

void	pb(t_node **a, t_node **b)
{
	int	val;

	if (!*a)
		return ;
	val = pop_front(a);
	push_front(b, val);
	ft_printf("pb\n");
}

void	pa(t_node **a, t_node **b)
{
	int	val;

	if (!*b)
		return ;
	val = pop_front(b);
	push_front(a, val);
	ft_printf("pa\n");
}

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

void	ss(t_node **a, t_node **b)
{
	t_node	*first_a;
	t_node	*second_a;
	t_node	*first_b;
	t_node	*second_b;

	// スタックaの交換
	if (*a && (*a)->next)
	{
		first_a = *a;
		second_a = (*a)->next;
		first_a->next = second_a->next;
		second_a->next = first_a;
		*a = second_a;
	}
	// スタックbの交換
	if (*b && (*b)->next)
	{
		first_b = *b;
		second_b = (*b)->next;
		first_b->next = second_b->next;
		second_b->next = first_b;
		*b = second_b;
	}
	ft_printf("ss\n");
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

void	rr(t_node **a, t_node **b)
{
	t_node	*first_a;
	t_node	*cur_a;
	t_node	*first_b;
	t_node	*cur_b;

	// スタックaのローテート
	if (*a && (*a)->next)
	{
		first_a = *a;
		cur_a = *a;
		while (cur_a->next)
			cur_a = cur_a->next;
		*a = first_a->next;
		first_a->next = NULL;
		cur_a->next = first_a;
	}
	// スタックbのローテート
	if (*b && (*b)->next)
	{
		first_b = *b;
		cur_b = *b;
		while (cur_b->next)
			cur_b = cur_b->next;
		*b = first_b->next;
		first_b->next = NULL;
		cur_b->next = first_b;
	}
	ft_printf("rr\n");
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

void	rrr(t_node **a, t_node **b)
{
	t_node	*cur_a;
	t_node	*prev_a;
	t_node	*cur_b;
	t_node	*prev_b;

	// スタックaのリバースローテート
	if (*a && (*a)->next)
	{
		cur_a = *a;
		prev_a = NULL;
		while (cur_a->next)
		{
			prev_a = cur_a;
			cur_a = cur_a->next;
		}
		prev_a->next = NULL;
		cur_a->next = *a;
		*a = cur_a;
	}
	// スタックbのリバースローテート
	if (*b && (*b)->next)
	{
		cur_b = *b;
		prev_b = NULL;
		while (cur_b->next)
		{
			prev_b = cur_b;
			cur_b = cur_b->next;
		}
		prev_b->next = NULL;
		cur_b->next = *b;
		*b = cur_b;
	}
	ft_printf("rrr\n");
}

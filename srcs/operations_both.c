/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_both.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: homura <homura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:45:00 by homura            #+#    #+#             */
/*   Updated: 2025/11/10 17:13:46 by homura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include "../libft/stdio/ft_printf/ft_printf.h"

void	ss(t_node **a, t_node **b)
{
	t_node	*first_a;
	t_node	*second_a;
	t_node	*first_b;
	t_node	*second_b;

	if (*a && (*a)->next)
	{
		first_a = *a;
		second_a = (*a)->next;
		first_a->next = second_a->next;
		second_a->next = first_a;
		*a = second_a;
	}
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

void	rr(t_node **a, t_node **b)
{
	t_node	*first_a;
	t_node	*cur_a;
	t_node	*first_b;
	t_node	*cur_b;

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

void	rrr(t_node **a, t_node **b)
{
	t_node	*cur_a;
	t_node	*prev_a;
	t_node	*cur_b;
	t_node	*prev_b;

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

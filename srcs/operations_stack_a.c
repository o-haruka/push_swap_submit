/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_stack_a.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: homura <homura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:45:00 by homura            #+#    #+#             */
/*   Updated: 2025/11/10 17:13:51 by homura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include "../libft/stdio/ft_printf/ft_printf.h"

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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_push.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: homura <homura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:45:00 by homura            #+#    #+#             */
/*   Updated: 2025/11/10 17:13:48 by homura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include "../libft/stdio/ft_printf/ft_printf.h"

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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwong <juwong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 14:12:18 by juwong            #+#    #+#             */
/*   Updated: 2018/07/14 17:35:56 by juwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_swap(void *a, void *b)
{
	void *tmp;

	tmp = a;
	a = b;
	b = tmp;
}
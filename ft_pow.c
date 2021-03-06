/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 18:46:51 by rcavadas          #+#    #+#             */
/*   Updated: 2016/03/07 15:51:13 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int	ft_pow(int var, int pow)
{
	int tmp;

	tmp = var;
	while (--pow)
	{
		var = var * tmp;
	}
	return (var);
}

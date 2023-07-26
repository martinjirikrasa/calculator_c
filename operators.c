/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrasa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:23:06 by mkrasa            #+#    #+#             */
/*   Updated: 2023/07/26 15:23:06 by mkrasa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_lib.h"

int	plus(int num1, int num2)
{
	return (num1 + num2);
}

int	minus(int num1, int num2)
{
	return (num1 - num2);
}

int	times(int num1, int num2)
{
	return (num1 * num2);
}

int	divide(int num1, int num2)
{
	return (num1 / num2);
}

int	mod(int num1, int num2)
{
	return (num1 % num2);
}

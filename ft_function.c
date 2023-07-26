/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_function.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrasa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:18:22 by mkrasa            #+#    #+#             */
/*   Updated: 2023/07/26 15:18:23 by mkrasa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_lib.h"

int	lets_do_it(int num1, char *str, int num2)
{
	if (str[0] == '+')
		return (do_thing(num1, num2, plus));
	if (str[0] == '-')
		return (do_thing(num1, num2, minus));
	if (str[0] == '*')
		return (do_thing(num1, num2, times));
	if (str[0] == '/')
		return (do_thing(num1, num2, divide));
	if (str[0] == '%')
		return (do_thing(num1, num2, mod));
	return (0);
}

int	do_thing(int num1, int num2, int (*f) (int, int))
{
	int	result;

	result = f(num1, num2);
	return (result);
}

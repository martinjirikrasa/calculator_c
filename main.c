/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrasa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 13:39:52 by mkrasa            #+#    #+#             */
/*   Updated: 2023/07/26 13:39:53 by mkrasa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_lib.h"

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	strl(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putnbr(int nb)
{
	unsigned int	num;

	if (nb < 0)
	{
		ft_putchar('-');
		num = nb * (-1);
	}
	else
		num = nb;
	if (num > 10)
		ft_putnbr(num / 10);
	ft_putchar(num % 10 + 48);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	if (argc == 4 && (argv[2][0] == '/' || argv[2][0] == '+'
			|| argv[2][0] == '-' || argv[2][0] == '*'
			|| argv[2][0] == '%') && strl(argv[2]) == 1)
	{
		if (argv[2][0] == '/' && argv[3][0] == '0')
		{
			ft_putstr("Stop : division by zero\n");
			return (0);
		}
		if (argv[2][0] == '%' && argv[3][0] == '0')
		{
			ft_putstr("Stop : modulo by zero\n");
			return (0);
		}
		else
		{
			ft_putnbr(lets_do_it(ft_atoi(argv[1]), argv[2], ft_atoi(argv[3])));
			ft_putchar('\n');
			return (0);
		}
	}
	ft_putchar('0');
	ft_putchar('\n');
	return (0);
}

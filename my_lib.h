/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_lib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrasa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:25:20 by mkrasa            #+#    #+#             */
/*   Updated: 2023/07/26 15:25:21 by mkrasa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_LIB_H
# define MY_LIB_H

# include <unistd.h>

int		plus(int num1, int num2);
int		minus(int num1, int num2);
int		times(int num1, int num2);
int		divide(int num1, int num2);
int		mod(int num1, int num2);
int		strl(char *str);
void	ft_putstr(char *str);
void	ft_putchar(char c);
int		ft_atoi(const char *str);
int		do_thing(int num1, int num2, int (*f) (int, int));
int		lets_do_it(int num1, char *str, int num2);
void	ft_putnbr(int nb);

#endif

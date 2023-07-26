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

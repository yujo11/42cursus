/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 08:07:45 by yujo              #+#    #+#             */
/*   Updated: 2020/08/04 11:14:58 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format_checker(const char **format)
{
	char checker;

	checker = ft_strchr(FORMAT, **format);
	// if (checker == 0)
	// 	printf("NULL");
	// if (checker == '%')
	// 	ft_putchar('%');
	if (checker == 'c')
		ft_putchar('V', &bag);
	// else if (checker == 's')
	// 	printf("%c", checker);
	// else if (checker == 'p')
	// 	printf("%c", checker);
	// else if (checker == 'd')
	// 	ft_putchar('V', bag);
	// else if (checker == 'i')
	// 	printf("%c", checker);
	// else if (checker == 'u')
	// 	printf("%c", checker);
	// else if (checker == 'x')
	// 	printf("%c", checker);
	// else if (checker == 'X')
	// 	printf("%c", checker);
}

void	ft_putchar(char c, t_struct *bag)
{
	write(1, &c, 1);
	bag->count++;
}

void	ft_printf_start(const char *format, t_struct *bag)
{
	while (*format)
	{
		if (*format != '%' && *format)
			ft_putchar(*format, &bag);
		else if (*format == '%')
		{
			format++;
			ft_format_checker(*format);
		}
		format++;
	}
}

int 	ft_printf(const char *format, ...)
{
	t_struct	bag;

	va_start(bag.ap, format);
	ft_printf_start(&format, &bag);
	va_end(bag.ap);
	return (bag.count);
}

int main(void) {
	int a = ft_printf("asdasdasdasdas  | %c |asdasdasdasda", 'O');
	printf("\n");
	printf("%d\n", a);
	printf("asdasdasdasdas  | %c |asdasdasdasda\n", 'O');
}

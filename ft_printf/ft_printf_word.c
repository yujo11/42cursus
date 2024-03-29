/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_word.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 21:56:11 by yujo              #+#    #+#             */
/*   Updated: 2020/08/12 20:04:32 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_word_space(t_struct *tag)
{
	int		i;

	if (tag->zero && !tag->minus && !tag->dot && !tag->precision)
		return ;
	i = 0;
	if (tag->precision && tag->precision < tag->data_len)
	{
		while (i < (tag->width - tag->precision))
		{
			tag->count += ft_putchar(' ');
			i++;
		}
	}
	else if (!tag->zero && tag->data_len < tag->width)
	{
		while (i < (tag->width - tag->data_len))
		{
			tag->count += ft_putchar(' ');
			i++;
		}
	}
}

void	print_word_zero(t_struct *tag)
{
	int		i;

	i = 0;
	if (tag->zero && !tag->minus)
	{
		while (i < tag->width - tag->data_len)
		{
			tag->count += ft_putchar('0');
			i++;
		}
	}
}

void	print_word(t_struct *tag)
{
	char	*str;
	int		c;

	str = 0;
	c = 0;
	if (tag->specifier == 's')
	{
		str = va_arg(tag->va, char *);
		str = (str == NULL) ? "(null)" : str;
	}
	else if (tag->specifier == 'c')
		c = va_arg(tag->va, int);
	else
		c = '%';
	tag->data_len = (tag->specifier == 's') ? ft_strlen(str, tag) : 1;
	tag->minus == 0 ? print_word_space(tag) : 0;
	print_word_zero(tag);
	if (tag->specifier == 's')
		ft_putstr(str, tag);
	else
		tag->count += (ft_putchar(c));
	tag->minus == 1 ? print_word_space(tag) : 0;
}

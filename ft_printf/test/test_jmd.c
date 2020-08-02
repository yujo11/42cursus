/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_jmd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 14:57:42 by yujo              #+#    #+#             */
/*   Updated: 2020/08/02 15:00:11 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	printf("%.4s\n", "123456");
	printf("%.10s\n", "123456");

	// char *a = 0;
	// printf("|%s|\n", a);
	// printf("|%.2s|\n", a);
	// printf("|%.6s|\n", a);

	int	a = 123456;

	printf("%.4d\n", a);	// 123456
	printf("%.8d\n", a);	// 00123456

	int	b = -123456;

	printf("%.4d\n", b);	// -123456
	printf("%.8d\n", b);	// -00123456

	int	c = 0xabcdef;

	printf("%.8x\n", c);	// 00abcdef
	printf("%.4x\n", c);	// abcdef
}

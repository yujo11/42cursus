/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_width.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 15:00:37 by yujo              #+#    #+#             */
/*   Updated: 2020/08/02 15:05:22 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	printf("|%3s|\n", "123456");
	printf("|%10s|\n", "123456");
	printf("|%3d|\n", 123456);
	printf("|%10d|\n", 123456);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onmoeket <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 10:35:09 by onmoeket          #+#    #+#             */
/*   Updated: 2020/07/10 10:35:16 by onmoeket         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write (1,&c ,1);
}

void ft_print_numbers(void)
{
	char number;

    number = '0';
	while (number <= '9') {
		ft_putchar(number);
		number ++;
	}
}


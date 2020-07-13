/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onmoeket <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 09:22:01 by onmoeket          #+#    #+#             */
/*   Updated: 2020/07/10 10:34:09 by onmoeket         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void   ft_putchar(char c)
{
	write(1,&c, 1);

}

void   ft_print_reverse_alphabet(void)
{
	char count;

	count = 'z';
	while (count >= 'a')
	{
		ft_putchar(count);
		count--;
	}
}
 




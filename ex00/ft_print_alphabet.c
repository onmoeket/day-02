/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onmoeket <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 09:06:47 by onmoeket          #+#    #+#             */
/*   Updated: 2020/07/10 10:32:34 by onmoeket         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void  ft_putchar(char c) {
	write(1, &c, 1);
}

void  ft_print_alphabet(void) {
	char   count;

	count = 'a';
	while (count <= 'z') {
		ft_putchar(count);
		count++;
	}

}



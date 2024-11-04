/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:05:19 by liulm             #+#    #+#             */
/*   Updated: 2024/11/04 16:27:00 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main()
{
	char			c = 'a';
	int				intd = 2147483647;
	int				inti = 2147483647;
	char			str[] = "Coucou, c'est moi !";
	int				*ptr = &intd;
	unsigned int	hexa = 255;
	unsigned int	dec = 333333;

	ft_printf("Char: %c\n", c);
	ft_printf("Int d: %d\n", intd);
	ft_printf("Int i: %i\n", inti);
	ft_printf("String: %s\n", str);
	ft_printf("Pointer: %p\n", ptr);
	ft_printf("Unsigned Decimal: %u\n", dec);
	ft_printf("Lower Hexa: %x\n", hexa);
	ft_printf("Upper Hexa: %X\n", hexa);
	ft_printf("Tout: %c, %d, %i, %s, %p, %u, %x, %X, %%,\n", c, intd, inti, str, ptr, dec, hexa, hexa);
	ft_printf("Pointer 0: %p \n\n", ptr);
	ft_printf("random test: 156%");

	printf("Char: %c\n", c);
	printf("Int d: %d\n", intd);
	printf("Int i: %i\n", inti);
	printf("String: %s\n", str);
	printf("Pointer: %p\n", ptr);
	printf("Unsigned Decimal: %u\n", dec);
	printf("Lower Hexa: %x\n", hexa);
	printf("Upper Hexa: %X\n", hexa);
	printf("Tout: %c, %d, %i, %s, %p, %u, %x, %X, %%,\n", c, intd, inti, str, ptr, dec, hexa, hexa);
	printf("Pointer 0: %p\n\n", ptr);
	printf("random test: 156%");
	return (0);
}

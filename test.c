/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:05:19 by liulm             #+#    #+#             */
/*   Updated: 2024/11/05 13:56:20 by liulm            ###   ########.fr       */
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
	int				*ptrnull = NULL;
	unsigned int	hexa = 255;
	unsigned int	dec = 4294967295;

	ft_printf("\nPrintouf tests:\n\n");
	ft_printf("Char: %c\n", c);
	printf("Char: %c\n\n", c);
	ft_printf("Int d: %d\n", intd);
	printf("Int d: %d\n\n", intd);
	ft_printf("Int i: %i\n", inti);
	printf("Int i: %i\n\n", inti);
	ft_printf("String: %s\n", str);
	printf("String: %s\n\n", str);
	ft_printf("Pointer: %p\n", ptr);
	printf("Pointer: %p\n\n", ptr);
	ft_printf("Pointer 0: %p \n", ptrnull);
	printf("Pointer 0: %p\n\n", ptrnull);
	ft_printf("Unsigned Decimal: %u\n", dec);
	printf("Unsigned Decimal: %u\n\n", dec);
	ft_printf("Lower Hexa: %x\n", hexa);
	printf("Lower Hexa: %x\n\n", hexa);
	ft_printf("Upper Hexa: %X\n", hexa);
	printf("Upper Hexa: %X\n\n", hexa);
	ft_printf("Tout: %c, %d, %i, %s, %p, %u, %x, %X, %%,\n", c, intd, inti, str, ptr, dec, hexa, hexa);
	printf("Tout: %c, %d, %i, %s, %p, %u, %x, %X, %%,\n\n", c, intd, inti, str, ptr, dec, hexa, hexa);

	return (0);
}

// int main()
// {
// 	ft_printf("random test: 156%");
// 	return (0);
// }

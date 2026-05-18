/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apascual <apascual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 17:07:46 by apascual          #+#    #+#             */
/*   Updated: 2026/04/29 11:52:01 by apascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;
	long	n;

	n = nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

/* #include <stdio.h>

void	ft_putnbr(int nb);

int	main(void)
{
	printf("Esperado: 42\n");
	printf("Real: ");
	fflush(stdout);
	ft_putnbr(42);
	printf("\n");

	printf("Esperado: -42\n");
	printf("Real: ");
	fflush(stdout);
	ft_putnbr(-42);
	printf("\n");

	printf("Esperado: -2147483648\n");
	printf("Real: ");
	fflush(stdout);
	ft_putnbr(-2147483648);
	printf("\n");
	return (0);
} */

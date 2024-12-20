/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imsbaiti <imsbaiti@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 04:45:14 by imsbaiti          #+#    #+#             */
/*   Updated: 2024/12/19 18:23:38 by imsbaiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_pf(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	if (n < 0)
	{
		n *= -1;
		count = count + write(1, "-", 1);
	}
	if (n > 9)
	{
		count = count + ft_putnbr_pf(n / 10);
		count = count + ft_putnbr_pf(n % 10);
	}
	if (n >= 0 && n <= 9)
	{
		n = n + '0';
		count = count + write(1, &n, 1);
	}
	return (count);
}

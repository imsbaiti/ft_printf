/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imsbaiti <imsbaiti@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 04:25:27 by imsbaiti          #+#    #+#             */
/*   Updated: 2024/12/20 16:18:54 by imsbaiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h> 

int	ft_putchar_pf(char c);
int	ft_putstr_pf(char *str);
int	ft_putnbr_pf(int n);
int	ft_putuns_pf(unsigned int n);
int	ft_putptr_pf(void *ptr);
int	ft_puthex_pf(unsigned int n, const char f);
int	ft_printf(const char *str, ...);
#endif
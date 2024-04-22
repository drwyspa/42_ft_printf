/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 21:47:20 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/04/22 22:36:37 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		{
			write(1, &s[i], 1);
			i++;
		}
}





int	ft_printf(const char *, ...)
{
	va_list	args;
	int		count;
	char	*str;




	return (count????);
}
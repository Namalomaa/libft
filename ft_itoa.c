/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namaloma <namaloma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 16:34:41 by namaloma          #+#    #+#             */
/*   Updated: 2025/12/10 17:39:39 by namaloma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_count(int n)
{
	int	count;
	long int	num;

	num = n;
	count = 0;
	if (num <= 0)
		count ++;
	while (num)
	{
		count ++;
		num /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*a;
	int		len;
	long int	num;

	num = n;
	len = num_count(n);
	a = (char *)malloc((len + 1) * sizeof(char));
	if (!a)
		return (NULL);
	a[len] = '\0';
	len --;
	if (num == 0)
	{
		a[0] = '0';
		return (a);
	}
	if (num < 0)
	{
		a[0] = '-';
		num = -num;
	}
	while (num)
	{
		a[len --] = (num % 10) + '0';
		num /= 10;
	}
	return (a);
}

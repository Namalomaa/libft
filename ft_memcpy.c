/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namaloma <namaloma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 09:49:13 by namaloma          #+#    #+#             */
/*   Updated: 2025/11/26 12:27:24 by namaloma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*cdest;
	const unsigned char	*csrc;

	cdest = (unsigned char *)dest;
	csrc = (const unsigned char *)src;
	while (n--)
		*cdest++ = *csrc++;
	return (dest);
}

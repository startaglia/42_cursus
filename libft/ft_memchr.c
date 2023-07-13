/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:25:47 by startagl          #+#    #+#             */
/*   Updated: 2023/01/17 15:26:06 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, int n)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (i < n)
	{
		if (*(char *)(s + i) == (char)c)
			return ((unsigned char *)(s + i));
		i++;
	}
	return (0);
}

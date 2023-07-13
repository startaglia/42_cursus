/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:41:43 by startagl          #+#    #+#             */
/*   Updated: 2023/01/24 14:34:20 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	if (!s)
		return (0);
	while (len >= 0)
	{
		if (s[len] == (char)c)
			return ((char *)(s + (len)));
		len--;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:36:28 by startagl          #+#    #+#             */
/*   Updated: 2023/01/20 14:49:15 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	slen;
	size_t	arr_size;
	char	*res;

	i = 0;
	if (!s)
		return (0);
	arr_size = 0;
	slen = ft_strlen(s);
	if (start < slen)
		arr_size = slen - start;
	if (arr_size > len)
		arr_size = len;
	res = (char *)malloc((arr_size + 1) * (sizeof(char)));
	if (!res)
		return (0);
	ft_strlcpy(res, (char *)s + start, arr_size + 1);
	return (res);
}

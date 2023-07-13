/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:26:27 by startagl          #+#    #+#             */
/*   Updated: 2023/01/20 14:47:58 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_char(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	end;
	char	*str;

	if (!s1 || !set)
		return (0);
	while (s1)
	{
		if (check_char((char)*s1, set))
			s1++;
		else
			break ;
	}
	end = ft_strlen(s1);
	while (end != 0)
	{
		if (check_char(s1[end - 1], set))
			end--;
		else
			break ;
	}
	str = (char *)malloc(end * sizeof(char) + 1);
	if (!str)
		return (0);
	ft_strlcpy(str, (char *)s1, end + 1);
	return (str);
}

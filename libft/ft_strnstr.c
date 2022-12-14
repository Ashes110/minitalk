/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atito <atito@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 09:40:05 by marvin            #+#    #+#             */
/*   Updated: 2022/10/21 12:45:11 by atito            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	cnt;

	cnt = 0;
	if (!ft_strlen(s2))
		return ((char *)s1);
	if (!n)
		return (NULL);
	while (s1[cnt] && cnt + ft_strlen(s2) <= n)
	{
		if (!ft_strncmp(&s1[cnt], s2, ft_strlen(s2)))
			return ((char *)&s1[cnt]);
		cnt += 1;
	}
	return (NULL);
}

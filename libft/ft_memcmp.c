/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atito <atito@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:03:23 by atito             #+#    #+#             */
/*   Updated: 2022/10/10 17:26:02 by atito            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			cnt;
	unsigned char	*tmp_s1;
	unsigned char	*tmp_s2;

	tmp_s1 = (unsigned char *)s1;
	tmp_s2 = (unsigned char *)s2;
	cnt = 0;
	while (cnt < n)
	{
		if (tmp_s1[cnt] != tmp_s2[cnt])
			return (tmp_s1[cnt] - tmp_s2[cnt]);
		cnt += 1;
	}
	return (0);
}

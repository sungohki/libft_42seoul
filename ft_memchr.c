/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungohki <sungohki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 10:36:22 by sungohki          #+#    #+#             */
/*   Updated: 2022/11/28 13:56:19 by sungohki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*temp;
	size_t				index;

	temp = (unsigned const char *)s;
	index = 0;
	while (index < n)
	{
		if (temp[index] == c)
			return (&((void *)s)[index]);
		index++;
	}
	return (0);
}
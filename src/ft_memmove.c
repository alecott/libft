/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 11:56:45 by briviere          #+#    #+#             */
/*   Updated: 2017/11/08 14:46:29 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dst_ptr;
	const char	*src_ptr;
	size_t		idx;

	dst_ptr = dst;
	src_ptr = src;
	idx = len - 1;
	if (dst_ptr > src_ptr)
	{
		while (idx < len)
		{
			dst_ptr[idx] = src_ptr[idx];
			idx--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}

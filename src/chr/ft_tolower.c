/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 17:04:50 by briviere          #+#    #+#             */
/*   Updated: 2017/11/07 17:14:41 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_chr.h"

int		ft_tolower(int c)
{
	if (ft_isupper(c))
		return (c + 32);
	return (c);
}

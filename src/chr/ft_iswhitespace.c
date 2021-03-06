/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iswhitespace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 10:32:41 by briviere          #+#    #+#             */
/*   Updated: 2017/11/09 09:57:57 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_chr.h"

int		ft_iswhitespace(int c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f' ||
			c == '\r');
}

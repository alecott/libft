/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_term.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 17:24:25 by briviere          #+#    #+#             */
/*   Updated: 2017/12/19 09:06:09 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TERM_H
# define FT_TERM_H

# include "ft_env.h"
# include "ft_str.h"
# include <term.h>

char	*ft_term_init(const char *termtype);
char	*ft_term_type(void);

#endif

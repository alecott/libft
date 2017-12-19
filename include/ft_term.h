/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_term.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 17:24:25 by briviere          #+#    #+#             */
/*   Updated: 2017/12/19 16:04:21 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TERM_H
# define FT_TERM_H

# include "ft_env.h"
# include "ft_io.h"
# include "ft_str.h"
# include <term.h>
# include <termios.h>

char	*ft_term_init(const char *termtype);
char	*ft_term_type(void);
int		ft_term_col(void);
int		ft_term_row(void);
void	ft_term_clr(char **termbuf);
char	*ft_term_cm(char **termbuf);
void	ft_term_cur_mv(char **termbuf, int hpos, int vpos);

void	ft_term_hidein(void);

/*
** APPEARANCE MODES
*/
void	ft_term_mb(char **termbuf);
void	ft_term_md(char **termbuf);
void	ft_term_mh(char **termbuf);
void	ft_term_mk(char **termbuf);
void	ft_term_mp(char **termbuf);
void	ft_term_mr(char **termbuf);
void	ft_term_me(char **termbuf);
void	ft_term_us(char **termbuf);
void	ft_term_ue(char **termbuf);

#endif

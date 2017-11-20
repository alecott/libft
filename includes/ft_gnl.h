/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gnl.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 12:14:51 by briviere          #+#    #+#             */
/*   Updated: 2017/11/20 16:48:45 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GNL_H
# define FT_GNL_H

# define BUFF_SIZE 1024

# include "libft.h"
# include <string.h>

typedef struct	s_buf_tracker {
	int		fd;
	char	*buf;
	size_t	buf_len;
	size_t	idx;
	int		is_eof;
}				t_buf_tracker;

int				get_next_line(const int fd, char **line);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_env_get.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 16:35:53 by briviere          #+#    #+#             */
/*   Updated: 2017/12/19 09:29:19 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_env.h"

char	*ft_env_get(char **envp, char *name)
{
	size_t		idx;
	size_t		len;

	idx = 0;
	len = ft_strlen(name);
	while (envp[idx])
	{
		if (ft_strncmp(envp[idx], name, len) == 0 && envp[idx][len] == '=')
			return (ft_strchr(envp[idx], '=') + 1);
		idx++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_env_set.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 09:07:29 by briviere          #+#    #+#             */
/*   Updated: 2017/12/15 15:03:04 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_env.h"

static char		*ft_env_set_sub(char **envp, char *name, char *value, int over)
{
	char	*tmp;
	char	*res;

	if (over)
		tmp = ft_strdup(value);
	else
		tmp = ft_strjoin_sep(ft_env_get(envp, name), ':', value);
	res = ft_strjoin_sep(name, '=', tmp);
	free(tmp);
	return (res);
}

void			ft_env_set(char ***envp_ptr, char *name, char *value, int over)
{
	char		**envp;
	size_t		idx;
	size_t		name_len;
	char		*tmp;

	envp = *envp_ptr;
	idx = 0;
	name_len = ft_strlen(name);
	while (envp[idx])
	{
		if (ft_strncmp(envp[idx], name, name_len) == 0)
		{
			tmp = ft_env_set_sub(envp, name, value, over);
			free(envp[idx]);
			envp[idx] = tmp;
			return ;
		}
		idx++;
	}
	envp = ft_realloc(envp, (idx + 1) *
			sizeof(char *), (idx + 2) * sizeof(char *));
	envp[idx + 1] = 0;
	envp[idx] = ft_strjoin_sep(name, '=', value);
	*envp_ptr = envp;
}

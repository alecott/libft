/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_env_set_ent.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 11:47:50 by briviere          #+#    #+#             */
/*   Updated: 2017/12/13 09:31:58 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_env_set_ent(char ***envp, char *ent, int over)
{
	char	**splitted;

	splitted = ft_strsplit(ent, '=');
	if (splitted[0])
	{
		ft_env_set(envp, splitted[0], splitted[1], over);
		free(splitted[0]);
	}
	if (splitted[1])
		free(splitted[1]);
	free(splitted);
}

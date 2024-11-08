/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrirome <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 10:16:43 by adrirome          #+#    #+#             */
/*   Updated: 2024/10/02 08:13:01 by adrirome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	strlen;
	size_t	end;
	char	*str;

	str = 0;
	if (s1 != 0 && set != 0)
	{
		strlen = 0;
		end = ft_strlen(s1);
		while (s1[strlen] && ft_strchr(set, s1[strlen]))
			strlen++;
		while (s1[end - 1] && ft_strchr(set, s1[end - 1]) && end > strlen)
			end--;
		str = (char *)malloc(sizeof(char) * (end - strlen + 1));
		if (str)
			ft_strlcpy(str, &s1[strlen], end - strlen + 1);
	}
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrirome <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 09:57:45 by adrirome          #+#    #+#             */
/*   Updated: 2024/09/16 11:47:26 by adrirome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*point;
	size_t	i;

	i = 0;
	size = ft_strlen(s) + 1;
	if (s == NULL)
		return (NULL);
	else
	{
		point = malloc(sizeof(char) * size);
		if (point == NULL)
			return (NULL);
		while (s[i] != '\0')
		{
			point[i] = s[i];
			i++;
		}
		point[i] = '\0';
	}
	return (point);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrirome <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 09:35:42 by adrirome          #+#    #+#             */
/*   Updated: 2024/09/18 10:10:28 by adrirome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*point;
	size_t			len;

	i = 0;
	if (f == NULL || s == NULL)
		return (NULL);
	len = ft_strlen(s);
	point = malloc(len + 1);
	if (point == NULL)
		return (NULL);
	while (i < len)
	{
		point[i] = f(i, s[i]);
		i++;
	}
	point[len] = '\0';
	return (point);
}

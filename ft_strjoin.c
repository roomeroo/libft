/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrirome <adrirome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:43:13 by adrirome          #+#    #+#             */
/*   Updated: 2024/10/25 13:50:10 by adrirome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		a;
	int		b;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	a = ft_strlen(s1);
	b = ft_strlen(s2);
	i = 0;
	str = malloc(a + b + 1);
	if (!str)
		return (NULL);
	while (a--)
	{
		str[i] = s1[i];
		i++;
	}
	a = i;
	i = 0;
	while (b--)
		str[a++] = s2[i++];
	str[a] = '\0';
	return (str);
}

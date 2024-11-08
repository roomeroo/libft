/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrirome <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:50:07 by adrirome          #+#    #+#             */
/*   Updated: 2024/09/11 13:14:55 by adrirome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	unsigned char		*p_str1;
	unsigned const char	*p_str2;

	if (str1 < str2)
		return (ft_memcpy(str1, str2, n));
	p_str1 = (unsigned char *)str1;
	p_str2 = (unsigned const char *)str2;
	if (!n || str1 == str2)
		return (str1);
	while (n--)
		p_str1[n] = p_str2[n];
	return (str1);
}

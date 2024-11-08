/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrirome <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 11:18:30 by adrirome          #+#    #+#             */
/*   Updated: 2024/09/13 12:49:49 by adrirome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*pointer;

	pointer = s;
	while (n > 0)
	{
		*pointer = c;
		pointer++;
		n--;
	}
	return (s);
}

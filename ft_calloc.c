/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrirome <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 08:51:55 by adrirome          #+#    #+#             */
/*   Updated: 2024/09/16 09:09:05 by adrirome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*point;
	size_t	total_size;

	total_size = nmemb * size;
	point = malloc(total_size);
	if (point == NULL)
		return (NULL);
	ft_memset(point, 0, total_size);
	return (point);
}

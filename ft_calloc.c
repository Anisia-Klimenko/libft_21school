/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anisia <anisia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 11:44:31 by acristin          #+#    #+#             */
/*   Updated: 2021/10/15 18:50:19 by anisia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	// if (!nmemb || !size)
	// 	return (0);
	p = (void *)malloc(nmemb * size);
	if (!p)
		return (0);
	ft_bzero(p, nmemb * size);
	return (p);
}

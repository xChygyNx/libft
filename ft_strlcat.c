/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcredibl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 17:09:14 by pcredibl          #+#    #+#             */
/*   Updated: 2019/04/18 18:39:00 by pcredibl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;
	size_t	j;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = 0;
	j = 0;
	if (size == 0)
		return (len_src);
	while (dst[i])
		i++;
	while (i < (size - 1) && src[j])
		dst[i++] = src[j++];
	while (i < size)
		dst[i++] = '\0';
	if (size < len_dst)
		return (size + len_src);
	return (len_dst + len_src);
}

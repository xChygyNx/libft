/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcredibl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 16:39:12 by pcredibl          #+#    #+#             */
/*   Updated: 2019/04/17 14:55:56 by pcredibl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123)\
	|| (c > 47 && c < 58))
		return (1);
	else
		return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodaniel <rodaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 04:36:56 by rodaniel          #+#    #+#             */
/*   Updated: 2018/11/16 01:00:03 by rodaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	char	*dst;

	if ((dst = (char *)malloc(!size ? 0 : size + 1)) == NULL)
		return (NULL);
	while (size)
		dst[size--] = 0;
	dst[size] = 0;
	return (dst);
}

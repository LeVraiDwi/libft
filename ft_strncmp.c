/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosse <tcosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 14:48:54 by tcosse            #+#    #+#             */
/*   Updated: 2020/06/12 18:22:30 by dwi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	c1;
	unsigned char	c2;

	c1 = 0;
	c2 = 0;
	while (n-- && *s1 && *s2)
	{
		c1 = *s1;
		c2 = *s2;
		if (c1 != c2)
			return (c1 - c2);
		s1++;
		s2++;
	}
	return (c1 - c2);
}

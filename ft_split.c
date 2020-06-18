/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosse <tcosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 17:16:48 by tcosse            #+#    #+#             */
/*   Updated: 2020/06/12 18:36:28 by dwi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		count(char const *s, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s[j] && s[j] == c)
		j++;
	while (s[j])
		if (s[j++] == c)
		{
			i++;
			while (s[j] == c)
				j++;
		}
	return (i);
}



char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	*buf;
	char	**strtab;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	if(!(buf = (char *)malloc(sizeof(char *) * ft_strlen(s))))
		return (0);
	i = count(s, c);
	if (!(strtab = (char **)malloc(sizeof(char *) * (i + 1))))
		return (0);
	while (*s)
	{
		i = 0;
		while (*s && *s != c)
			buf[i++] = *s++;
		buf[i] = '\0';
		while (*s && *s == c)
			s++;
		if (*buf)
			if (!(strtab[j++] = ft_strdup(buf)))
				return (0);
	}
	strtab[j] = NULL;
	return (strtab);
}

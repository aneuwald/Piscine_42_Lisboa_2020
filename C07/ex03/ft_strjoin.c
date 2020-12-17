/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 14:27:58 by acanterg          #+#    #+#             */
/*   Updated: 2020/12/09 09:23:21 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_length_strings(char **strings, int size)
{
	int len;

	len = 0;
	while (size-- > 0)
		len += ft_strlen(strings[size]);
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	int		s_sep;
	char	*final_str;

	s_sep = (size < 1) ? 0 : ft_strlen(sep) * (size - 1);
	final_str = malloc(sizeof(char) *
		(ft_length_strings(strs, size) + s_sep + 1));
	if (final_str == NULL)
		return (NULL);
	j = 0;
	k = 0;
	while (k < size)
	{
		i = 0;
		while (strs[k][i])
			final_str[j++] = strs[k][i++];
		i = 0;
		while (k != size - 1 && sep[i])
			final_str[j++] = sep[i++];
		k++;
	}
	final_str[j] = '\0';
	return (final_str);
}

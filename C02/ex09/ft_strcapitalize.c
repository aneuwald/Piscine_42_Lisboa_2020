/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 13:41:48 by acanterg          #+#    #+#             */
/*   Updated: 2020/12/01 14:17:50 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_alpha_numeric(char c)
{
	if ((c >= 'a' && c <= 'z') ||
		(c >= 'A' && c <= 'Z') ||
		(c >= '0' && c <= '9'))
		return (1);
	return (0);
}

int		is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int		is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_alpha_numeric(str[i - 1]) == 0
			&& is_lowercase(str[i]) == 1)
			str[i] -= 32;
		if (is_alpha_numeric(str[i - 1]) == 1
			&& is_uppercase(str[i]) == 1)
			str[i] += 32;
		i++;
	}
	return (str);
}

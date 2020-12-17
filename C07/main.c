/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:15:06 by acanterg          #+#    #+#             */
/*   Updated: 2020/12/10 08:28:11 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <stdlib.h>


char	*ft_strdup(char *src);
int		*ft_range(int min, int max);
int		ft_ultimate_range(int **range, int min, int max);
char	*ft_strjoin(int size, char **strs, char *sep);
char 	*ft_convert_base(char *nbr, char *base_from, char *base_to);
char	**ft_split(char *str, char *charset);

int		main()
{	
	printf("\n\n**********  EX00  **********");
	char *str1 = "Testando Copy";
	printf("\n    strdup('%s')\t return: %s", str1, strdup(str1));
	printf("\n ft_strdup('%s')\t return: %s", str1, ft_strdup(str1));

	printf("\n\n**********  EX01  **********");
	int	*ex01 = ft_range(-5, 5);
	int i = 0;
	printf("\n ft_range(%d, %d):", -5, 5);
	printf("\n");
	 if (!ex01)
	 	printf(" (NULL)");
	 else
	 	while (i < 5 - (-5))
	 		printf(" [%d]: %d  ", i++, *ex01++);

	printf("\n\n**********  EX02  **********");
	int *range;
	int	ex02 = ft_ultimate_range(&range, 3, 10);
	i = 0;
	printf("\n ft_range(%d, %d):", 3, 10);
	printf("\n");
	 if (!range[0])
	 	printf(" (NULL)");
	 else
	 	while (i < ex02)
	 		printf(" [%d]: %d  ", i++, *range++);

	printf("\n\n**********  EX03  **********");
	char *tablo[6];
	tablo[0] = "Alex";
	tablo[1] = "Paola";
	tablo[2] = "Andressa";
	tablo[3] = "Divaldo";
	printf("\n%s", ft_strjoin(4, tablo, "_"));

	printf("\n\n**********  EX04  **********");
	char *base_from = "0123456789";
	char *base_to = "poney";
	char *nbr = "      \t\f  ----++--0123456";
	printf("\nReturned: %s", ft_convert_base(nbr, base_from, base_to));


	printf("\n\n**********  EX05  **********");
	char *str = "hHr1q    AsivXzLbY1cEv4SUtUGBf396zcEkDguCJXLdKCT";
	char *charset = "7Kce";
	char **ex05 = ft_split(str, charset);
	printf("\nReturned: ");
	i = 0;
	while (ex05[i])
	{
		printf("\n [%d] %s", i, ex05[i]);
		i++;
	}
	
	printf("\n\nTEST FINISHED\n\n");



}

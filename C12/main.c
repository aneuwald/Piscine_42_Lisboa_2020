/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 10:52:14 by acanterg          #+#    #+#             */
/*   Updated: 2020/12/13 10:22:58 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

// PROTOTYPES
void	ft_foreach(int *tab, int length, void (*f)(int));
int		*ft_map(int *tab, int length, int (*f)(int));
int		ft_any(char **tab, int(*f)(char*));
int		ft_count_if(char **tab, int length, int(*f)(char*));
int		ft_is_sort(int *tab, int length, int(*f)(int, int));
void	ft_sort_string_tab(char **tab);
void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *));

// FUNCTIONS
void	ft_printnbr(int nb) { printf("%d  ", nb); }
int		ft_duplicate(int nb) { return (nb * 3); }
int		ft_is_alex(char *nome) { if (nome[0] == 'a' && nome[1] == 'l' && nome[2] == 'e' && nome[3] == 'x' && nome[4] == '\0') return (1); return (0); }
int		ft_bigger_than(int a, int b) { return (a - b); }
int		ft_strcmp_2(char *s1, char *s2) { while (*s1 && *s2 && (*s1 == *s2)) { s1++; s2++;} return (*s1 - *s2); }

// MAIN
int main()
{
	printf("**********  EX00  **********\n");
	int i;
	int size = 5;
	int	ex00[size];
	ex00[0] = 6;
	ex00[1] = 8;
	ex00[2] = 7;
	ex00[3] = 8;
	ex00[4] = 1;
	ft_foreach(ex00, size, &ft_printnbr);

	printf("\n\n**********  EX01  **********\n");
	int *ex01 = ft_map(ex00, size, &ft_duplicate);
	ft_foreach(ex01, size, &ft_printnbr);

	printf("\n\n**********  EX02  **********\n");
	char *ex02[5];
	ex02[0] = "alex";
	ex02[1] = "divaldo";
	ex02[2] = "duarte";
	ex02[3] = "alex";
	ex02[4] = 0;
	printf("Exist any alex?  R: %d ", ft_any(ex02, &ft_is_alex));

	printf("\n\n**********  EX03  **********\n");
	char **ex03 = ex02;
	printf("How many alex?  R: %d ", ft_count_if(ex03, 1, &ft_is_alex));

	printf("\n\n**********  EX04  **********\n");
	int *ex04 = ex00;
	printf("Is array sorted?  R: %d ", ft_is_sort(ex04, 4, &ft_bigger_than));

	printf("\n\n**********  EX06  **********\n");
	char *ex06[5];
	ex06[0] = "teste1";
	ex06[1] = "divaldo";
	ex06[2] = "duarte";
	ex06[3] = "alex";
	ex06[4] = 0;
	ft_sort_string_tab(ex06);
	for (i = 0; ex06[i]; i++)
		printf("[%d]: %s\t", i, ex06[i]);

	printf("\n\n**********  EX07  **********\n");
	char *ex07[5];
	ex07[0] = "teste1";
	ex07[1] = "divaldo";
	ex07[2] = "duarte";
	ex07[3] = "alex";
	ex07[4] = 0;
	ft_advanced_sort_string_tab(ex07, &ft_strcmp_2);
	for (i = 0; ex07[i]; i++)
		printf("[%d]: %s\t", i, ex07[i]);

	printf("\n\n########  TEST FINISHED!  ########\n\n");

}
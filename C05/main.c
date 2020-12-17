/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:15:06 by acanterg          #+#    #+#             */
/*   Updated: 2020/12/03 20:31:00 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int		ft_iterative_factorial(int nb);
int		ft_recursive_factorial(int nb);
int 	ft_iterative_power(int nb, int power);
int 	ft_recursive_power(int nb, int power);
int 	ft_fibonacci(int index);
int		ft_sqrt(int nb);
int		ft_is_prime(int nb);
int		ft_find_next_prime(int nb);
int 	ft_ten_queens_puzzle(void);

int		main()
{	
	printf("\n\n**********  EX00  **********");
	printf("\nft_iterative_factorial(5):\t %d", ft_iterative_factorial(5));
	printf("\nft_iterative_factorial(0):\t %d", ft_iterative_factorial(0));
	printf("\nft_iterative_factorial(1):\t %d", ft_iterative_factorial(1));
	printf("\nft_iterative_factorial(-1):\t %d", ft_iterative_factorial(-1));

	printf("\n\n**********  EX01  **********");
	printf("\nft_recursive_factorial(5):\t %d", ft_recursive_factorial(5));
	printf("\nft_recursive_factorial(0):\t %d", ft_recursive_factorial(0));
	printf("\nft_recursive_factorial(1):\t %d", ft_recursive_factorial(1));
	printf("\nft_recursive_factorial(-1):\t %d", ft_recursive_factorial(-1));

	printf("\n\n**********  EX02  **********");
	printf("\nft_iterative_power(2, 3):\t %d", ft_iterative_power(2, 3));
	printf("\nft_iterative_power(0, 5):\t %d", ft_iterative_power(0, 5));
	printf("\nft_iterative_power(-5, 3):\t %d", ft_iterative_power(-5, 3));
	printf("\nft_iterative_power(5, 0):\t %d", ft_iterative_power(5, 0));
	printf("\nft_iterative_power(5, -1):\t %d", ft_iterative_power(5, -1));

	printf("\n\n**********  EX03  **********");
	printf("\nft_recursive_power(2, 3):\t %d", ft_recursive_power(2, 3));
	printf("\nft_recursive_power(0, 0):\t %d", ft_recursive_power(0, 0));
	printf("\nft_recursive_power(-5, 3):\t %d", ft_recursive_power(-5, 3));
	printf("\nft_recursive_power(5, 0):\t %d", ft_recursive_power(5, 0));
	printf("\nft_recursive_power(5, -1):\t %d", ft_recursive_power(5, -1));

	printf("\n\n**********  EX04  **********");
	printf("\nft_fibonacci(10):\t %d", ft_fibonacci(10));
	printf("\nft_fibonacci(-1):\t %d", ft_fibonacci(-1));
	printf("\nft_fibonacci(0):\t %d", ft_fibonacci(0));
	printf("\nft_fibonacci(6):\t %d", ft_fibonacci(6));

	printf("\n\n**********  EX05  **********");
	printf("\nft_sqrt(144):\t\t\t %d", ft_sqrt(144));
	printf("\nft_sqrt(-1):\t\t\t %d", ft_sqrt(-1));
	printf("\nft_sqrt(0):\t\t\t %d", ft_sqrt(0));
	printf("\nft_sqrt(1):\t\t\t %d", ft_sqrt(1));
	printf("\nft_sqrt(2147395600) INT_MAX_SQ:\t %d", ft_sqrt(2147395600));
	printf("\nft_sqrt(%d) INT_MAX:\t %d", INT_MAX, ft_sqrt(INT_MAX));

	printf("\n\n**********  EX06  **********");
	printf("\nft_is_prime(401):\t\t\t %d", ft_is_prime(401));
	printf("\nft_is_prime(2):\t\t\t\t %d", ft_is_prime(2));
	printf("\nft_is_prime(0):\t\t\t\t %d", ft_is_prime(0));
	printf("\nft_is_prime(1):\t\t\t\t %d", ft_is_prime(1));
	printf("\nft_is_prime(11):\t\t\t %d", ft_is_prime(11));
	printf("\nft_is_prime(%d) INT_MAX:\t %d", INT_MAX, ft_is_prime(INT_MAX));

	printf("\n\n**********  EX07  **********");
	printf("\nft_find_next_prime(402):\t\t %d", ft_find_next_prime(402));
	printf("\nft_find_next_prime(2):\t\t\t %d", ft_find_next_prime(2));
	printf("\nft_find_next_prime(0):\t\t\t %d", ft_find_next_prime(0));
	printf("\nft_find_next_prime(1):\t\t\t %d", ft_find_next_prime(1));
	printf("\nft_find_next_prime(11):\t\t\t %d", ft_find_next_prime(14));
	printf("\nft_find_next_prime(%d) INT_MAX:\t %d", INT_MAX, ft_find_next_prime(INT_MAX));


	printf("\n\n**********  EX07  **********");
	printf("\nft_ten_queens_puzzle():\n");
	ft_ten_queens_puzzle();

	printf("\n\nTEST FINISHED\n\n");
}

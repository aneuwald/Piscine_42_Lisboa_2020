/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 20:50:15 by acanterg          #+#    #+#             */
/*   Updated: 2020/12/08 20:51:32 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
void				ft_show_tab(struct s_stock_str *par);

int main(int argc, char **argv)
{
	ft_show_tab(ft_strs_to_tab(argc, argv));
}

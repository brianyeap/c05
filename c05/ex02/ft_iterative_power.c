/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryeap <bryeap@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:28:53 by bryeap            #+#    #+#             */
/*   Updated: 2024/03/27 18:36:20 by bryeap           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int cal;

	cal = nb;
	if (nb < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		cal *= nb;
		power--;
	}
	return (cal);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d", ft_iterative_power(4, 10));
// 	return (0);
// }
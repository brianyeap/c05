/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brian <brian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:28:53 by bryeap            #+#    #+#             */
/*   Updated: 2024/03/28 03:25:28 by brian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int cal;

	cal = nb;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
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
// 	printf("%d", ft_iterative_power(1, 0));
// 	return (0);
// }
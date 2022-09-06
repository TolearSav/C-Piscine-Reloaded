/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 00:52:30 by coder             #+#    #+#             */
/*   Updated: 2022/08/30 01:18:35 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	if ((nb == 0) || (nb == 1))
		return (1);
	while (nb > 1)
	{
		if (result > (~(1 << 31)) / nb)
			return (0);
		result = result * nb;
		nb--;
	}
	return (result);
}

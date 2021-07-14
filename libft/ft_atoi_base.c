/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: symatevo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 11:58:05 by symatevo          #+#    #+#             */
/*   Updated: 2021/07/14 11:58:06 by symatevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	atoi;
	int	sign;

	atoi = 0;
	sign = 1;
	i = 0;
	if (!is_base_valid(base))
		return (0);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && (is_in_base(str[i], base) != -1))
	{
		atoi = atoi * ft_strlen(base) + is_in_base(str[i], base);
		i++;
	}
	return (atoi * sign);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_prt.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: symatevo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 11:57:12 by symatevo          #+#    #+#             */
/*   Updated: 2021/07/14 11:57:13 by symatevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstnew_prt(t_list **s, size_t count, size_t size)
{
	*s = malloc(count * size);
	if (!s)
		return (0);
	return (1);
}

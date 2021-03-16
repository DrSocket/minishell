/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 18:07:18 by lucisanc          #+#    #+#             */
/*   Updated: 2021/03/16 18:43:49 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalpha(int c)
{
	if (c != '\0')
	{
		if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
			return (1);
	}
	return (0);
}

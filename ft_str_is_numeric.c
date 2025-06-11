/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brbernar <brbernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 18:59:01 by brbernar          #+#    #+#             */
/*   Updated: 2025/06/11 19:00:22 by brbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0' && str[i] <= '9'))
			i++;
		else
			return (0);
	}
	return (1);
}


// int	main(void)
// {
// 	char	*str;
// 	int	numeric;

// 	str = "09832423a";
// 	numeric = ft_str_is_numeric(str);
// 	printf("%d\n", numeric);
// 	return (0);
// }
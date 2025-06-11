/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brbernar <brbernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 19:07:43 by brbernar          #+#    #+#             */
/*   Updated: 2025/06/11 19:11:29 by brbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
			i++;
		else
			return (0);
	}
	return (1);
}


// int	main(void)
// {
// 	char	*str;
// 	int	lowercase;

// 	str = "star";
// 	lowercase = ft_str_is_lowercase(str);
// 	printf("%d\n", lowercase);
// 	return (0);
// }
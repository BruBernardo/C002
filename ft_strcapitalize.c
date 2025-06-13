/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brbernar <brbernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 05:53:15 by brbernar          #+#    #+#             */
/*   Updated: 2025/06/13 06:19:06 by brbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z'
			&& (i == 0 || (!(str[i - 1] >= '0' && str[i - 1] <= '9')
					&& !(str[i - 1] >= 'A' && str[i - 1] <= 'Z')
					&& !(str[i - 1] >= 'a' && str[i - 1] <= 'z'))))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str[] = "Hei, hvordan gar det? "
// 				"42palavras quarenta-e-duas "
// 				"cinquenta+e+um";

// 	ft_strcapitalize(str);
// 	printf("%s\n", str);
// 	return (0);
// }
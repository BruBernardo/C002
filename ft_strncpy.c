/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brbernar <brbernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 17:59:16 by brbernar          #+#    #+#             */
/*   Updated: 2025/06/11 19:03:41 by brbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i <= n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	dest;
// 	char	src[] = "Charmander";
// 	unsigned int	n;

// 	n = 4;
// 	printf("%s", ft_strncpy(&dest, src, n));
// 	return (0);
// }
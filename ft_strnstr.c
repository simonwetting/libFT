/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/28 09:09:53 by anonymous     #+#    #+#                 */
/*   Updated: 2026/03/11 16:02:31 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	n_big;
	size_t	n_little;

	n_big = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[n_big] && n_big < len)
	{
		if (big[n_big] == little[0])
		{
			n_little = 0;
			while (little[n_little] == big[n_big] || little[n_little] == 0)
			{
				if (little[n_little] == 0)
					return ((char *)(big + n_big - n_little));
				n_little++;
				n_big++;
			}
			n_big -= n_little;
		}
		n_big++;
	}
	return (0);
}

// #include <biging.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char *big = "hel hhello, world";
// 	char *little ="hell";
// 	printf("%s\n", ft_bigbig(big, little));
// 	printf("%s", bigbig(big, little));
// }
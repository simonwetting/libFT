/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bigbig.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/28 09:09:53 by anonymous     #+#    #+#                 */
/*   Updated: 2026/02/05 15:22:26 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_bignbig(const char *big, const char *little, size_t len)
{
	int		n_big;
	int		n_little;

	n_big = 0;
	if (little[0] == '\0')
		return (big);
	while (big[n_big] && n_big < len)
	{
		if (big[n_big] == little[0])
		{
			n_little = 0;
			while (little[n_little] == big[n_big] || little[n_little] == 0)
			{
				if (little[n_little] == 0)
					return (big + n_big - n_little);
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
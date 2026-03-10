/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/27 17:56:59 by anonymous     #+#    #+#                 */
/*   Updated: 2026/03/10 17:07:07 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	index;

	index = 0;
	if (n == 0)
		return (0);
	while (s1[index] && s2[index] && index < n - 1)
	{
		if (s1[index] != s2[index])
			return (s1[index] - s2[index]);
		index++;
	}
	return (s1[index] - s2[index]);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char *s1 = "a";
// 	char *s2 = "";

// 	printf("%d\n", ft_strncmp(s1, s2, 0));
// 	printf("%d\n", strncmp(s1, s2, 0));
// 	printf("%d\n", ft_strncmp(s1, s2, 1));
// 	printf("%d\n", strncmp(s1, s2, 1));
// 	printf("%d\n", ft_strncmp(s1, s2, 2));
// 	printf("%d\n", strncmp(s1, s2, 2));
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlowcase.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/27 11:40:40 by anonymous     #+#    #+#                 */
/*   Updated: 2026/02/02 14:43:52 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
			c += 32;
	return (c);
}

// #include <stdio.h>
// int		main()
// {
// 	char	str[20] = "tES34t";

// 	printf("%s\n", str);
// 	ft_strlowcase(str);
// 	printf("%s\n", str);
// }
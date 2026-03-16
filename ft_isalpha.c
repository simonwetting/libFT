/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/26 16:19:37 by anonymous     #+#    #+#                 */
/*   Updated: 2026/03/16 12:39:26 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1024);
	return (0);
}

// #include <stdio.h>
// #include <unistd.h>
// int	main(void)
// {
// 	char	*str;

// 	str = "";
// 	printf("%d", ft_str_is_alpha(str));
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/27 11:33:03 by anonymous     #+#    #+#                 */
/*   Updated: 2026/03/11 13:49:44 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
			c -= 32;
	return (c);
}

// #include <stdio.h>
// int		main()
// {
// 	char	str[100] = "te345st";

// 	printf("%s\n", str);
// 	ft_strupcase(str);
// 	printf("%s\n", str);
// }
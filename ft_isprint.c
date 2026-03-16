/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/27 11:25:00 by anonymous     #+#    #+#                 */
/*   Updated: 2026/03/16 12:44:57 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (16384);
	return (0);
}

// #include <stdio.h>
// int		main(void)
// {
// 	char	*str = "testasdad";
// 	printf("%d", ft_str_is_printable(str));
// }
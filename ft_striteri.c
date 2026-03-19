/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striteri.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/13 12:07:48 by anonymous     #+#    #+#                 */
/*   Updated: 2026/03/19 14:26:50 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	index;

	index = 0;
	// while (s[index])
	// 	{printf("s[%d] = %c\n", index, s[index]);f(index++, s);}
	while (*s)
		f(index++, s++);
}
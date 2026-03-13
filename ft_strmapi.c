/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/12 18:44:40 by anonymous     #+#    #+#                 */
/*   Updated: 2026/03/12 18:44:40 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	index;
	char			*new;

	new = malloc(ft_strlen(s) + 1);
	index = -1;
	while (s[++index])
		new[index] = f(index, s[index]);
	new[index] = 0;
	return (new);
}
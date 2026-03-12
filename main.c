/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/12 10:38:38 by anonymous     #+#    #+#                 */
/*   Updated: 2026/03/12 10:38:38 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main()
{
	char	*s = "Hello world, holla warld, test test";
	char	*s2 = ft_substr(s, 6, 10);

	printf("%s", s2);
}
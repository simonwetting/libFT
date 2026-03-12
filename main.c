/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/12 10:38:38 by anonymous     #+#    #+#                 */
/*   Updated: 2026/03/12 14:16:36 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main()
{
	printf("\n\n");
	char	*s = "Hello world, holla warld, test test";
	char	*s2 = ft_substr(s, 6, 10);

	printf("%s\n", s2);
	
	char	*s3 = ft_strjoin(s, s2);
	printf("%s\n", s3);
}
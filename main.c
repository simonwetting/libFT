/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/12 10:38:38 by anonymous     #+#    #+#                 */
/*   Updated: 2026/03/12 17:42:51 by swetting      ########   odam.nl         */
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
	
	printf("test\n");
	char	*s4 = ft_strtrim(s3, "holla");
	printf("ft_strtrim>%s\n", s4);

	// printf("%d>%s\n", count_strings(s4, ' '), s4);
	// printf("%d>%s\n", count_strings("", ' '), "");
	// printf("%d>%s\n", count_strings("   ", ' '), "   ");
	// printf("%d>%s\n", count_strings("test", ' '), "test");
	// printf("%d>%s\n", count_strings(" test", ' '), " test");
	// printf("%d>%s\n", count_strings("test ", ' '), "test ");
	// printf("%d>%s\n", count_strings("  test ", ' '), "  test ");
	// printf("%d>%s\n", count_strings("test test test ", ' '), "test test test ");
	// printf("%d>%s\n", count_strings("  t etes   ", ' '), "  t etes   ");

	// char **strings = ft_split("Hello world test    test ", ' ');
	// char **strings = ft_split("", ' ');
	// char **strings = ft_split("    ", ' ');
	char **strings = ft_split("   Hello   world test    test ", ' ');
	int		n = 0;
	if (strings)
		while (strings[n])
			printf("%s\n", strings[n++]);
}
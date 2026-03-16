/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/12 10:38:38 by anonymous     #+#    #+#                 */
/*   Updated: 2026/03/13 18:14:31 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <assert.h>

void	*duplicate_node(void *p)
{
	t_list	*old_node;
	t_list	*new;

	old_node = (t_list *)p;
	new = malloc(sizeof(t_list));
	new->content = old_node->content;
	new->next = 0;
	return ((void *)new);
}

void	print_content(void *p)
{
	ft_putendl_fd((char *)p, 1);
}

void	del(void *p)
{
	free(p);
}

void	upcase(unsigned int index, char *s)
{
	if (s[index] >= 'a' && s[index] <= 'z')
		s[index] -= 32;
}

void	lowcase(unsigned int index, char *s)
{
	if (s[index] >= 'A' && s[index] <= 'Z')
		s[index] += 32;
}

char	increment(unsigned int i, char c)
{
	return (c + i);
}

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
	// char **strings = ft_split("Hello", ' ');
	// char **strings = ft_split("", ' ');
	char **strings = ft_split("    ", ' ');
	// char **strings = ft_split("   Hello   world test    test ", ' ');
	int		n = -1;
	if (strings)
		while (strings[++n])
			printf("[%d]%s\n", n, strings[n]);
	else
		printf("ft_split empty\n");
	printf("^^^^test\n");
	printf("%s\n", ft_itoa(-12345));
	write(1, ft_itoa(-12345), 6);
	printf("%s\n", ft_itoa(12345));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(2147483647));

	char *smapi = ft_strmapi("test", &increment);
	printf("strmapi>%s\n", smapi);

	char s5[] = "testAA";
	ft_striteri(s5, &upcase);
	printf("ft_striteri>%s\n", s5);
	ft_striteri(s5, &lowcase);
	printf("ft_striteri>%s\n", s5);
	
	ft_putstr_fd("test", 1);
	ft_putendl_fd("test", 1);
	ft_putendl_fd("test", 1);
	ft_putnbr_fd(2147483647, 1);
	ft_putendl_fd("", 1);
	ft_putnbr_fd(-2147483648, 1);
	ft_putendl_fd("", 1);
	ft_putnbr_fd(0, 1);
	ft_putendl_fd("", 1);
	ft_putnbr_fd(-12345, 1);
	ft_putendl_fd("", 1);

	t_list	*head = ft_lstnew("Head");

	printf("%s\n", (char *)head->content);

	ft_lstadd_front(&head, ft_lstnew("New_head"));
	t_list	*loop = head;
	while (loop)
	{
		printf("%p>%s\n", loop, (char *)loop->content);
		loop = loop->next;
	}
	t_list *tmp = ft_lstlast(head);
	printf("size>%d\n", ft_lstsize(head));
	printf("last>%s\n", (char *)tmp->content);
	ft_lstadd_back(&head, ft_lstnew("Third"));
	loop = head;
	while (loop)
	{
		printf("%p>%s\n", loop, (char *)loop->content);
		loop = loop->next;
	}
	// ft_lstclear(&head, &del);
	printf("afeter\n");
	ft_lstiter(head, &print_content);
	// ft_lstdelone(head, &del);
	// del(head);
	// free(&head->content);
	ft_putendl_fd("DUP:", 1);
	t_list *dup = ft_lstmap(head, &duplicate_node, &del);
	ft_putendl_fd("test", 1);
	ft_lstiter(dup, &print_content);
}
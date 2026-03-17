/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   combined_main.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/12 10:38:38 by anonymous     #+#    #+#                 */
/*   Updated: 2026/03/17 17:10:08 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <strings.h>
#include <assert.h>
#include <ctype.h>

void	test_memchr()
{
	char s[] = {0, 1, 2 ,3 ,4 ,5};
	printf("MEMCHR\n");
	// assert(ft_memchr(s, 0, 1) == s);
	printf("%p == %p\n", ft_memchr(s, 0, 1), s);
	printf("%p == %p\n", ft_memchr(s, 2 + 256, 3), s + 2);
}

void	test_memmove()
{
	char s[] = "test";
	
	printf("\nmemmove\n");
	// printf("%s\n", s);
	// ft_memcpy(s + 1, "ab", 2);
	// printf("%s\n", s);
	int		array[] = {1, 2, 3 , 4, 5, 6};
	// int		array2[] = {500, 500};
	for (int n = 0; n < 6; n ++)
		printf("%d\n", array[n]);
	ft_memmove(array + 1, array, 13);
	printf("\n");
	for (int n = 0; n < 6; n ++)
		printf("%d\n", array[n]);
	printf("FAILED TEST\n");
	char sResult[] = {67, 68, 67, 68, 69, 0, 45};
	ft_memmove(sResult + 1, sResult, 2);
	for (int n = 0; n < 6; n ++)
		printf("%d\n", sResult[n]);
	
}
void	test_memcpy(){
	printf("\nMEMCPY\n");
	char s[] = "test";

	printf("%s\n", s);
	ft_memcpy(s + 1, "ab", 2);
	ft_memcpy(s + 2, "ab", 0);
	printf("%s\n", s);
	int		array[] = {1, 2, 3 , 4};
	// int		array2[] = {500, 500};
	for (int n = 0; n < 4; n ++)
		printf("%d\n", array[n]);
	ft_memcpy(array + 1, array, 9);
	printf("\n");
	for (int n = 0; n < 4; n ++)
		printf("%d\n", array[n]);
}

void	test_memset()
{
	char s[] = "test test";

	printf("\ntesting memset:\n");
	// printf("%s\n", s);
	ft_memset(s + 2, 0, 0);
	printf("%s\n", s);
	// write(1, s, 10);
	// ft_putendl_fd("\0\0\0", 1);
	ft_memset(s + 2, 0, 2);
	printf("NULL>%d%d\n32>%d\n", s[2], s[3], s[4]);
	printf("%s\n", s);
	// write(1, s, 10);
}

void	test_memcmp()
{
	char s[] = {-128, 0, 127, 0};
	char sCpy[] = {-128, 0, 127, 0};
	char s2[] = {0, 0, 127, 0};
	char s3[] = {0, 0, 42, 0};
	
	printf("MEMCMP\n");
	printf("%d > 0\n", ft_memcmp(s, s2, 1));
	printf("%d < 0\n", ft_memcmp(s2, s, 1));
	printf("%d != 0\n", ft_memcmp(s2, s3, 4));
}

void	test_strlcpy()
{
	ft_putendl_fd("STRLCPY", 1);
	char src[] = "coucou";
	char dest[10]; memset(dest, 'A', 10);
	printf("src length>%zu == %lu\n", ft_strlcpy(dest, src, 2), strlen(src));
	printf("%s\n", dest);
	if (dest[1] == 0)
		printf("dest[1] = 0\n");
	printf("dest[2]>%c\n", dest[2]);
}

void	test_strnstr()
{
	char haystack[30] = "aaabcabcd";

	printf("STRNSTR\n");
	printf("%p\n\n", ft_strnstr("aaabcabcd", "cd", 8));
}

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
	assert(ft_atoi("") == atoi(""));
	assert(ft_atoi("0") == atoi("0"));
	assert(ft_atoi("123asd123") == atoi("123asd123"));
	assert(ft_atoi("-0") == atoi("-0"));
	assert(ft_atoi("-1234") == atoi("-1234"));
	assert(ft_atoi("-+1234") == atoi("-+1234"));
	assert(ft_atoi("--1234") == atoi("--1234"));
	assert(ft_atoi("++1234") == atoi("++1234"));
	assert(ft_atoi("-2147483648") == atoi("-2147483648"));
	assert(ft_atoi("2147483647") == atoi("2147483647"));

	char	bzero[] = "Test";
	write(1, bzero, 5);
	ft_bzero(bzero, 4);
	write(1, bzero, 5);

	// char	*callocated = ft_calloc(4294967296, 1);
	ft_putendl_fd("test2", 1);
	// if (callocated)
	// 	write(1, callocated, 1000);
	// else
	// 	ft_putendl_fd("Size too big", 1);
	
	for (int n = 0; n < 255; n++)
	{
		assert(ft_isprint(n) == isprint(n));
		assert(ft_isalnum(n) == isalnum(n));
		assert(ft_isdigit(n) == isdigit(n));
		assert(ft_isalpha(n) == isalpha(n));
	}

	printf("\nITOA\n");
	printf("%s\n", ft_itoa(-12345));
	printf("%s\n", ft_itoa(12345));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n\n", ft_itoa(2147483647));

	
	t_list	*head = ft_lstnew("Head");

	printf("lstnew>%s\n", (char *)head->content);

	printf("lstaddfront\n");
	ft_lstadd_front(&head, ft_lstnew("New_head"));
	t_list	*loop = head;
	while (loop)
	{
		printf("%p>%s\n", loop, (char *)loop->content);
		loop = loop->next;
	}
	t_list *tmp = ft_lstlast(head);
	printf("lstsize>%d\n", ft_lstsize(head));
	printf("lstlast>%s\n", (char *)tmp->content);
	printf("lstaddback(Third) and print list\n");
	ft_lstadd_back(&head, ft_lstnew("Third"));
	loop = head;
	while (loop)
	{
		printf("%p>%s\n", loop, (char *)loop->content);
		loop = loop->next;
	}
	// ft_lstclear(&head, &del);
	printf("lstiter (print content)>\n");
	ft_lstiter(head, &print_content);
	// ft_lstdelone(head, &del);
	// del(head);
	// free(&head->content);
	ft_putendl_fd("lstmap (duplicates) and lstiter:", 1);
	t_list *dup = ft_lstmap(head, &duplicate_node, &del);
	ft_lstiter(dup, &print_content);

	char	*mem = "testq";
	char	*mem2 = "test";
	char	*mem3 = "a";

	assert(memchr(mem, 't', 4) == ft_memchr(mem, 't', 4));
	assert(memchr(mem, 'q', 4) == ft_memchr(mem, 'q', 4));
	assert(memchr(mem, 't', 0) == ft_memchr(mem, 't', 0));
	// printf("%p == %p\n", memchr(mem, 't', 4), ft_memchr(mem, 't', 4));
	// printf("%p == %p\n", memchr(mem, 'q', 4), ft_memchr(mem, 'q', 4));
	// printf("%p == %p\n", memchr(mem, 't', 0), ft_memchr(mem, 't', 0));
	
	assert(memcmp(mem, mem3, 0) ==  ft_memcmp(mem, mem3, 0));
	assert(memcmp(mem, mem3, 1) ==  ft_memcmp(mem, mem3, 1));
	assert(memcmp(mem, mem2, 0) ==  ft_memcmp(mem, mem2, 0));
	assert(memcmp(mem, mem2, 1) ==  ft_memcmp(mem, mem2, 1));
	assert(memcmp(mem, mem2, 2) ==  ft_memcmp(mem, mem2, 2));
	assert(memcmp(mem, mem2, 3) ==  ft_memcmp(mem, mem2, 3));
	assert(memcmp(mem, mem2, 4) ==  ft_memcmp(mem, mem2, 4));
	assert(memcmp(mem, mem2, 5) ==  ft_memcmp(mem, mem2, 5));

	
	printf("\nMEMORY TEST\n");
	test_memcpy();
	test_memchr();
	test_memmove();
	test_memset();
	test_memcmp();
	test_strlcpy();
	test_strlcpy();
	test_strnstr();
	//printf("%lu>%p\n", __SIZE_MAX__,ft_calloc(__SIZE_MAX__, __SIZE_MAX__));

	// ft_putendl_fd("ft_putchar>", 1);
	// ft_putchar_fd('a', 1);
	// ft_putendl_fd("ft_putendl>", 1);
	// ft_putendl_fd("", 1);
	// ft_putendl_fd("test", 1);
	// ft_putendl_fd("", 1);
	// ft_putendl_fd("test2", 1);

	// ft_putendl_fd("ft_putstr>", 1);
	// ft_putstr_fd("test", 1);
	// ft_putendl_fd("test", 1);
	// ft_putendl_fd("test", 1);
	// ft_putendl_fd("ft_putnbr>", 1);
	// ft_putnbr_fd(2147483647, 1);
	// ft_putendl_fd("", 1);
	// ft_putnbr_fd(-2147483648, 1);
	// ft_putendl_fd("", 1);
	// ft_putnbr_fd(0, 1);
	// ft_putendl_fd("", 1);
	// ft_putnbr_fd(-12345, 1);
	// ft_putendl_fd("", 1);

	printf("ft_split>\n");
	char **strings = ft_split("Hello world test    test ", ' ');
	// char **strings = ft_split("Hello", ' ');
	// char **strings = ft_split("", ' ');
	// char **strings = ft_split("    ", ' ');
	// char **strings = ft_split("   Hello   world test    test ", ' ');
	int		n = -1;
	if (strings)
		while (strings[++n])
			printf("[%d]%s\n", n, strings[n]);
	else
		printf("ft_split empty\n");
		
	ft_putendl_fd("ft_strdup>", 1);
	char	*to_be_duplicated = "test";
	char	*duplicate = ft_strdup(to_be_duplicated);
	printf("%s\n", duplicate);

	char s5[] = "testAA";
	ft_striteri(s5, &upcase);
	printf("ft_striteri>%s\n", s5);
	ft_striteri(s5, &lowcase);
	printf("ft_striteri>%s\n", s5);
	
	printf("\nft_substr\n");
	char	*s1 = "Hello world, holla warld, test test";
	char	*s2 = ft_substr(s1, 6, 10);

	printf("%s\n", s2);
	
	ft_putendl_fd("ft_strjoin>", 1);
	char	*s3 = ft_strjoin(s1, s2);
	printf("%s\n", s3);
	
	printf("ft_strtrim\n");
	char	*s4 = ft_strtrim(s3, "holla");
	printf("ft_strtrim>%s\n", s4);

	



	
	char *smapi = ft_strmapi("test", &increment);
	printf("strmapi>%s\n", smapi);

	
}


// assert(isalnum('-') == ft_isalnum('-'));
	// assert(isalnum('*') == ft_isalnum('*'));
	// assert(isalnum('0') == ft_isalnum('0'));
	// assert(isalnum('1') == ft_isalnum('1'));
	// assert(isalnum('2') == ft_isalnum('2'));
	// assert(isalnum('3') == ft_isalnum('3'));
	// assert(isalnum('4') == ft_isalnum('4'));
	// assert(isalnum('5') == ft_isalnum('5'));
	// assert(isalnum('6') == ft_isalnum('6'));
	// assert(isalnum('7') == ft_isalnum('7'));
	// assert(isalnum('8') == ft_isalnum('8'));
	// assert(isalnum('9') == ft_isalnum('9'));
	// assert(isalnum('a') == ft_isalnum('a'));
	// assert(isalnum('b') == ft_isalnum('b'));
	// assert(isalnum('c') == ft_isalnum('c'));
	// assert(isalnum('d') == ft_isalnum('d'));

	// assert(isalpha('-') == ft_isalpha('-'));
	// assert(isalpha('*') == ft_isalpha('*'));
	// assert(isalpha('0') == ft_isalpha('0'));
	// assert(isalpha('1') == ft_isalpha('1'));
	// assert(isalpha('2') == ft_isalpha('2'));
	// assert(isalpha('3') == ft_isalpha('3'));
	// assert(isalpha('4') == ft_isalpha('4'));
	// assert(isalpha('5') == ft_isalpha('5'));
	// assert(isalpha('6') == ft_isalpha('6'));
	// assert(isalpha('7') == ft_isalpha('7'));
	// assert(isalpha('8') == ft_isalpha('8'));
	// assert(isalpha('9') == ft_isalpha('9'));
	// assert(isalpha('a') == ft_isalpha('a'));
	// assert(isalpha('b') == ft_isalpha('b'));
	// assert(isalpha('c') == ft_isalpha('c'));
	// assert(isalpha('d') == ft_isalpha('d'));

	// assert(isdigit('-') == ft_isdigit('-'));
	// assert(isdigit('*') == ft_isdigit('*'));
	// assert(isdigit('0') == ft_isdigit('0'));
	// assert(isdigit('1') == ft_isdigit('1'));
	// assert(isdigit('2') == ft_isdigit('2'));
	// assert(isdigit('3') == ft_isdigit('3'));
	// assert(isdigit('4') == ft_isdigit('4'));
	// assert(isdigit('5') == ft_isdigit('5'));
	// assert(isdigit('6') == ft_isdigit('6'));
	// assert(isdigit('7') == ft_isdigit('7'));
	// assert(isdigit('8') == ft_isdigit('8'));
	// assert(isdigit('9') == ft_isdigit('9'));
	// assert(isdigit('a') == ft_isdigit('a'));
	// assert(isdigit('b') == ft_isdigit('b'));
	// assert(isdigit('c') == ft_isdigit('c'));
	// assert(isdigit('d') == ft_isdigit('d'));
	
	// printf("isalpha('a')>%d\n", isalpha('a'));
	// printf("isalpha('g')>%d\n", isalpha('g'));
	// printf("isalpha('a')>%d\n", isalpha('0'));
	
	// printf("%d\n", isalnum('5'));
	// printf("%d\n", isalnum('9'));
	// printf("%d\n", isalnum('a'));
	// printf("%d\n", isalnum('0'));
	// printf("%d\n", isalnum('*'));

	// printf("isdigit('a')>%d\n", isdigit('a'));
	// printf("isdigit('g')>%d\n", isdigit('g'));
	// printf("isdigit('0')>%d\n", isdigit('0'));
	
	
	// printf("isprint('a')>%d\n", isprint('a'));
	// printf("isprint('\n')>%d\n", isprint('\n'));
	// printf("isprint(1)>%d\n", isprint(1));
	// printf("isprint(1)>%d\n", isprint(3));
	// printf("isprint(10)>%d\n", isprint(10));
	// printf("isprint(13)>%d\n", isprint(13));
	// printf("isprint(31)>%d\n", isprint(31));
	// printf("isprint(32)>%d\n", isprint(32));
	// printf("isprint('8')>%d\n", isprint('8'));


// printf("%d>%s\n", count_strings(s4, ' '), s4);
	// printf("%d>%s\n", count_strings("", ' '), "");
	// printf("%d>%s\n", count_strings("   ", ' '), "   ");
	// printf("%d>%s\n", count_strings("test", ' '), "test");
	// printf("%d>%s\n", count_strings(" test", ' '), " test");
	// printf("%d>%s\n", count_strings("test ", ' '), "test ");
	// printf("%d>%s\n", count_strings("  test ", ' '), "  test ");
	// printf("%d>%s\n", count_strings("test test test ", ' '), "test test test ");
	// printf("%d>%s\n", count_strings("  t etes   ", ' '), "  t etes   ");
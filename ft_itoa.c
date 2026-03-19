/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: swetting <swetting@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/12 17:45:39 by swetting      #+#    #+#                 */
/*   Updated: 2026/03/19 14:00:45 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		length_nbr(long nbr)
{
	int		length;

	if (nbr < 0)
		nbr *= -1;
	length = 0;
	if (nbr == 0)
		return (1);
	while (nbr > 0)
	{
		length++;
		nbr /= 10;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char	*str;
	long long	nb;
	int		index;
	int		length;

	nb = n;
	index = 0;
	length = length_nbr(nb);
	str = malloc(sizeof(char) * length + 1 + (nb < 0));
	if (nb < 0)
	{
		str[index] = '-';
		str++;
		nb *= -1;
	}
	while (index < length)
	{
		str[length - index++ - 1] = nb % 10 + '0';
		nb /= 10;
	}
	str[index] = '\0';
	if (n < 0)
		str--;
	return (str);
}

// int		main()
// {
// 	// char *s = ft_itoa(INT_MIN); //2147483648
// 	// printf("%s\n", s );
// 	// // free(s);
// 	printf("%d\n%d", (1 < 0), 1 > 0);
// }
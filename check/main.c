/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:00:26 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/04/23 13:19:00 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memmove_check(void)
{
	char	str[25] = "Moin User!";
	char	str1[25] = "Moin User!";
	char	strstr[38] = "HelloShinyRoundBall";
	printf("str before memmove: %s\n dest after memmmove: ", str);
	puts(memmove(str + 5, str, 12));
	printf("str after memmove:");
	puts(str);
	printf("str1 before memmove: %s\n dest after memmmove: ", str1);
	puts(memcpy(str + 6, str, 12));
	printf("str1 memmove:");
	puts(str);
	printf("strstr before memmove: %s\n dest after memmmove: ", strstr);
	puts(memmove(strstr + 10, strstr, 19));
	printf("strstr after memmove: %s \n", strstr);
	return (0);
}

int	ft_memcpy_check(void)
{
	char	str[25] = "Moin User!";
	char	str1[25] = "Moin User!";
	printf("str before: %s\n", str);
	puts(memcpy(str + 5, str, 12));
	printf("str after cpy:\n");
	puts(str);
	printf("str1 before: %s\n", str1);
	puts(memcpy(str1 + 6, str1, 12));
	printf("str1 after cpy:\n");
	puts(str);
	return (0);
}

/*
int	ft_ascii_check(void)
{
	int	c;
	int	c1;
	int	c2;

	c = 1849;
	c1 = 1849 % 256;
	return (0);
}
*/

int	main()
{
	printf("MEMCPY:\n");
	ft_memcpy_check();
	printf("MEMMOVE:\n");
	ft_memmove_check();
	return (0);
}

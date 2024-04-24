/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:00:26 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/04/24 13:26:13 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	ft_memmove_check(void)
{
	//todo: test what happens when there is a null character in the middle of the string
	//test what happens at the end of the string if n is bigger
	char	str[25] = "Moin User!";
	char	str1[25] = "Moin User!";
	char	strstr[38] = "HelloShinyRoundBall";
	printf("str before memmove: %s\n dest after memmmove: ", str);
	puts(memmove(str + 11, str, 14));
	printf("str after memmove:");
	puts(str);
	printf("str1 before memmove: %s\n dest after memmmove: ", str1);
	puts(memcpy(str + 3, str, 6));
	printf("str1 memmove:");
	puts(str);
	printf("strstr before memmove: %s\n dest after memmmove: ", strstr);
	puts(memmove(strstr + 5, strstr, 15));
	printf("strstr after memmove: %s \n", strstr);
	
	return (0);
}

int	ft_memcpy_check(void)
{
	char	str[25] = "Moin User!";
	char	str1[25] = "Moin User!";
	printf("str before: %s\n", str);
	puts(memcpy(str + 5, str, 5));
	printf("str after cpy:\n");
	puts(str);
	printf("str1 before: %s\n", str1);
	puts(memcpy(str1 + 3, str1, 6));
	printf("str1 after cpy:\n");
	puts(str1);
	return (0);
}

int	ft_isalpha_check(void)
{
	printf("A: %d\n", (isalpha(65)));
	printf("a: %d\n", (isalpha(97)));
	printf("^: %d\n", (isalpha(94)));
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
	printf("ISALPHA:\n");
	ft_isalpha_check();
	printf("MEMCPY:\n");
	ft_memcpy_check();
	printf("MEMMOVE:\n");
	ft_memmove_check();
	return (0);
}

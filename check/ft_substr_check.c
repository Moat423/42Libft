/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 12:22:52 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/05/08 13:56:51 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_check.h"
#include "../libft.h"

int	substr_test_cases(void)
{
	size_t	i;
	char	*buffer;
	typedef struct s_TestCase 
	{
		const char	*input;
		unsigned int start;
		size_t		len;
		const char	*expected;
	} t_testcase;

	i = 0;
	t_testcase cases_substr[] = {
		{"Hello", 0, 5, "Hello"},
        {"Hello", 3, 0, ""}, //substr of len 0
        {"Hello", 3, 2, "lo"}, //should stop at NULL
		{"Hello", 8, 5, NULL}, //out of bounds reading?
		{"Hello", 5, 5, ""}, // copying \0?
		{"", 0, 5, ""} // copying \0?
	};
	printf(COLOR_BLUE "substr\n" COLOR_RESET);
	while (i < sizeof(cases_substr) / sizeof(cases_substr[0]))
	{
		buffer = ft_substr(cases_substr[i].input, cases_substr[i].start, cases_substr[i].len);
		if (memcmp(buffer, cases_substr[i].expected, cases_substr[i].len) == 0) {
            printf("Case %lu: " COLOR_GREEN "PASS\n" COLOR_RESET, i++);
        } else
		{
            printf("Case %lu: " COLOR_RED "FAIL\n" COLOR_RESET, i++);
            printf(COLOR_BLUE "expected substr=%s got=%s\n" COLOR_RESET, buffer, cases_substr[i].expected);
		}
		free (buffer);
	}
	return (0);
}

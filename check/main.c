/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 13:41:20 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/05/08 13:19:25 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_check.h"
#include "../libft.h"

int	memchr_test_cases(void);
int	strnstr_test_cases(void);
int	isprint_test_cases(void);
int	atoi_test_cases(void);
int	bzero_test_cases(void);
int	strncmp_test_cases(void);
int	calloc_test_cases(void);
int	strdup_test_cases(void);
int	substr_test_cases(void);

int	main(void)
{
	strnstr_test_cases();
	isprint_test_cases();
	memchr_test_cases();
	atoi_test_cases();
	bzero_test_cases();
	strncmp_test_cases();
	calloc_test_cases();
	strdup_test_cases();
	substr_test_cases();
}

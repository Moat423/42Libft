/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 13:41:20 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/05/06 19:43:49 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	memchr_test_cases(void);
int	strnstr_test_cases(void);
int	isprint_test_cases(void);
int	atoi_test_cases(void);

int	main(void)
{
	strnstr_test_cases();
	isprint_test_cases();
	memchr_test_cases();
	atoi_test_cases();
}

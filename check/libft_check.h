/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_check.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 10:48:19 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/05/06 19:45:05 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <strings.h>
#include <string.h>
#include <stdlib.h>
// library for actual funcitons
#include <stdio.h>

#define COLOR_RED	"\x1b[31m"
#define COLOR_GREEN	"\x1b[32m"
#define COLOR_BLUE	"\x1b[34m"
#define COLOR_RESET	"\x1b[0m"

int	isprint_test_cases(void);
int	atoi_test_cases(void);

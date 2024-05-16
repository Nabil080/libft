/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbellila <nbellila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 15:05:47 by nbellila          #+#    #+#             */
/*   Updated: 2024/05/16 17:04:33 by nbellila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTER_H
# define TESTER_H

# define SIZE 10

# include <stdio.h>
# include <string.h>
# include <bsd/string.h> 
# include <ctype.h>
# include <strings.h>

char	**test_strings(void);

char	*test_chars(void);

int		*test_nums(void);

void	test_strlen(char **strings, int argc);

void	test_isalpha(char *chars, int argc);

void	test_isdigit(char *chars, int argc);

void	test_isalnum(char *chars, int argc);

void	test_isascii(char *chars, int argc);

void	test_strlcpy(char **strings, int argc);

void	test_strlcat(char **strings, int argc);

void	test_memset(int argc);

void	test_bzero(int argc);

void	test_memcpy(int argc);

#endif
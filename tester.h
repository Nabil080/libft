/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbellila <nbellila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 15:05:47 by nbellila          #+#    #+#             */
/*   Updated: 2024/05/16 12:50:50 by nbellila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTER_H
# define TESTER_H

# define NUMS_SIZE 10

# include <stdio.h>
# include <string.h>
# include <bsd/string.h> 
# include <ctype.h>

char	**test_strings(void);

char	*test_chars(void);

int		*test_nums(void);

void	test_strlen(char **strings, int argc);

void	test_isalpha(char *chars, int argc);

void	test_isdigit(char *chars, int argc);

void	test_strlcpy(char **strings, int argc);

void	test_strlcat(char **strings, int argc);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbellila <nbellila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 15:05:47 by nbellila          #+#    #+#             */
/*   Updated: 2024/05/15 17:37:02 by nbellila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTER_H
# define TESTER_H

# include <stdio.h>
# include <string.h>
# include <bsd/string.h> 

char	**test_strings(void);

void	test_strlen(char **strings, int argc);

void	test_strlcpy(char **strings, int argc);

void	test_strlcat(char **strings, int argc);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbellila <nbellila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 14:42:28 by nbellila          #+#    #+#             */
/*   Updated: 2024/05/16 13:00:53 by nbellila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "tester.h"

int	main(int argc, char **argv)
{
	char	**strings;
	char	*chars;
	int		*nums;

	strings = test_strings();
	chars = test_chars();
	nums = test_nums();
	printf("--------------------STRLEN--------------------\n\n");
	test_strlen(strings, argc);
	printf("--------------------ISALPHA--------------------\n\n");
	test_isalpha(chars, argc);
	printf("--------------------ISDIGIT--------------------\n\n");
	test_isdigit(chars, argc);
	printf("--------------------ISALNUM--------------------\n\n");
	test_isalnum(chars, argc);
	/*
	printf("--------------------STRLCPY--------------------\n");
	test_strlcpy(strings, argc);
	printf("--------------------STRLCAT--------------------\n");
	test_strlcat(strings, argc);
	*/
	free(strings);
	free(chars);
	free(nums);
	return (0);
	argv++;
}

void	test_strlen(char **strings, int argc)
{
	int	i;

	i = 0;
	while (strings[i])
	{
		printf("\"%s\" : ", strings[i]);
		if (strlen(strings[i]) == ft_strlen(strings[i]))
			printf("OK !\n");
		else
			printf("KO...\n");
		if (argc > 1)
		{
			printf("Original : %lu\n", strlen(strings[i]));
			printf("Copie : %lu\n", ft_strlen(strings[i]));
		}
		printf("\n");
		i++;
	}
}

void	test_isalpha(char *chars, int argc)
{
	size_t	i;

	i = 0;
	while (chars[i])
	{
		printf("\"%c\" : ", chars[i]);
		if (isalpha(chars[i]) && ft_isalpha(chars[i]))
			printf("OK !\n");
		else if (!isalpha(chars[i]) && !ft_isalpha(chars[i]))
			printf("OK !\n");
		else
			printf("KO...\n");
		if (argc > 1)
		{
			printf("Original : %i\n", isalpha(chars[i]));
			printf("Copie : %i\n", ft_isalpha(chars[i]));
		}
		printf("\n");
		i++;
	}
}

void	test_isdigit(char *chars, int argc)
{
	size_t	i;

	i = 0;
	while (chars[i])
	{
		printf("\"%c\" : ", chars[i]);
		if (isdigit(chars[i]) && ft_isdigit(chars[i]))
			printf("OK !\n");
		else if (!isdigit(chars[i]) && !ft_isdigit(chars[i]))
			printf("OK !\n");
		else
			printf("KO...\n");
		if (argc > 1)
		{
			printf("Original : %i\n", isdigit(chars[i]));
			printf("Copie : %i\n", ft_isdigit(chars[i]));
		}
		printf("\n");
		i++;
	}
}

void	test_isalnum(char *chars, int argc)
{
	size_t	i;

	i = 0;
	while (chars[i])
	{
		printf("\"%c\" : ", chars[i]);
		if (isalnum(chars[i]) && ft_isalnum(chars[i]))
			printf("OK !\n");
		else if (!isalnum(chars[i]) && !ft_isalnum(chars[i]))
			printf("OK !\n");
		else
			printf("KO...\n");
		if (argc > 1)
		{
			printf("Original : %i\n", isalnum(chars[i]));
			printf("Copie : %i\n", ft_isalnum(chars[i]));
		}
		printf("\n");
		i++;
	}
}
/*
void	test_strlcpy(char **strings, int argc)
{
	char	*cpy;
	char	*ft_cpy;
	size_t	i;

	i = 0;
	while (strings[i])
	{
		cpy = malloc(strlen(strings[i]) + 1 * sizeof(char));
		ft_cpy = malloc(strlen(strings[i]) + 1 * sizeof(char));
		printf("\"%s\" : ", strings[i]);
		if (strlcpy(cpy, strings[i], i + 1) != ft_strlcpy(ft_cpy, strings[i], i + 1))
			printf("KO...\n");
		else if (strcmp(cpy, ft_cpy))
			printf("KO...\n");
		else
			printf("OK !\n");
		if (argc > 1)
		{
			printf("Original : cpy = \"%s\", ret = %lu\n", cpy, strlcpy(ft_cpy, strings[i], i));
			printf("Copie : ft_cpy = \"%s\", ret = %lu\n", cpy, ft_strlcpy(ft_cpy, strings[i], i));
		}
		free(cpy);
		free(ft_cpy);
		i++;
	}
}

void	test_strlcat(char **strings, int argc)
{
	size_t	i;
	size_t	ret;
	size_t	ft_ret;
	char	*dst;
	char	*ft_dst;

	i = 0;
	while (strings[i])
	{
		dst = "dst";
		ft_dst = "dst";
		ret = strlcat(dst, strings[i], 1);
		ft_ret = ft_strlcat(dst, strings[i], 1);
		if (strcmp(dst, ft_dst) || ret != ft_ret)
			printf("KO...\n");
		else
			printf("OK !\n");
		if (argc > 1)
		{
			printf("Original : cat = \"%s\", ret = %lu\n", dst, ret);
			printf("Copie : ft_cat = \"%s\", ret = %lu\n", dst, ft_ret);
		}
		i++;
	}
}
*/

char	**test_strings(void)
{
	char	**strings;

	strings = malloc((3 + 1) * sizeof(char *));
	strings[0] = "";
	strings[1] = "Mot";
	strings[2] = "Deux mots";
	strings[3] = 0;
	return (strings);
}

char	*test_chars(void)
{
	char	*chars;

	chars = malloc((10 + 1) * sizeof(char));
	chars[0] = '0';
	chars[1] = 'a';
	chars[2] = 'A';
	chars[3] = 'b';
	chars[4] = '2';
	chars[5] = '\n';
	chars[6] = ' ';
	chars[7] = 'z';
	chars[8] = 'Z';
	chars[9] = '9';
	chars[10] = '\0';
	return (chars);
}

int	*test_nums(void)
{
	int	*nums;

	nums = malloc(NUMS_SIZE * sizeof(int));
	nums[0] = 0;
	nums[1] = 10;
	nums[3] = -10;
	nums[5] = 50;
	nums[3] = -50;
	nums[2] = 65;
	nums[4] = -65;
	nums[6] = 100;
	nums[7] = -100;
	nums[8] = 2147483647;
	nums[9] = -2147483648;
	return (nums);
}

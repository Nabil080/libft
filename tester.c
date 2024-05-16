/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbellila <nbellila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 14:42:28 by nbellila          #+#    #+#             */
/*   Updated: 2024/05/16 18:04:49 by nbellila         ###   ########.fr       */
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
	test_isalpha(chars, argc);
	test_isdigit(chars, argc);
	test_isalnum(chars, argc);
	test_isascii(chars, argc);
	test_strlen(strings, argc);
	test_memset(argc);
	test_bzero(argc);
	test_memcpy(argc);
	test_memmove(argc);
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

	printf("--------------------STRLEN--------------------\n\n");
	i = 0;
	while (strings[i])
	{
		printf("\"%s\" : ", strings[i]);
		if (strlen(strings[i]) == ft_strlen(strings[i]))
			printf("OK !\n");
		else
			printf("KO...\n");
		if (argc == 1)
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

	printf("--------------------IS_ALPHA--------------------\n\n");
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
		if (argc == 1)
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

	printf("--------------------IS_DIGIT--------------------\n\n");
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
		if (argc == 1)
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

	printf("--------------------IS_ALNUM--------------------\n\n");
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
		if (argc == 1)
		{
			printf("Original : %i\n", isalnum(chars[i]));
			printf("Copie : %i\n", ft_isalnum(chars[i]));
		}
		printf("\n");
		i++;
	}
}

void	test_isascii(char *chars, int argc)
{
	size_t	i;

	printf("--------------------IS_ASCII--------------------\n\n");
	i = 0;
	while (chars[i])
	{
		printf("\"%c\" : ", chars[i]);
		if (isascii(chars[i]) && ft_isascii(chars[i]))
			printf("OK !\n");
		else if (!isascii(chars[i]) && !ft_isascii(chars[i]))
			printf("OK !\n");
		else
			printf("KO...\n");
		if (argc == 1)
		{
			printf("Original : %i\n", isascii(chars[i]));
			printf("Copie : %i\n", ft_isascii(chars[i]));
		printf("\n");
		}
		i++;
	}
}

void	test_memset(int argc)
{
	char	buffer[SIZE];
	char	ft_buffer[SIZE];
	char	*str = (char *) memset(buffer, 'A', SIZE - 5);
	char	*ft_str = (char *) ft_memset(ft_buffer, 'A', SIZE - 5);

	printf("--------------------MEMSET--------------------\n\n");
	printf("\"%d\" : ", SIZE - 5);
	if (!strcmp(str, ft_str))
		printf("OK !\n");
	else
		printf("KO...\n");
	if (argc == 1)
	{
		printf("Original : %s\n", str);
		printf("Copie : %s\n", ft_str);
	}
	printf("\n");
}

void	test_bzero(int argc)
{
	char	str[] = "Bonjourno";
	char	ft_str[] = "Bonjourno";

	printf("--------------------BZERO--------------------\n\n");
	printf("Str = \"%s\", offset = %d : ", str, 3);
	bzero(&str[3], 2);
	ft_bzero(&ft_str[3], 2);
	if (!strcmp(str, ft_str))
		printf("OK !\n");
	else
		printf("KO...\n");
	if (argc == 1)
	{
		printf("Original : %s\n", str);
		printf("Copie : %s\n", ft_str);
	}
	printf("\n");
}

void	test_memcpy(int argc)
{
	char buffer[] = "Une phrase a copier";
	char	str[SIZE];
	char	ft_str[SIZE];
	printf("--------------------MEMCPY--------------------\n\n");
	printf("A copier = \"%s\", size = %d : ", buffer, SIZE - 5);

	memset(str, 0, 10);
	memcpy(str, buffer, SIZE - 5);
	memset(ft_str, 0, 10);
	ft_memcpy(ft_str, buffer, SIZE - 5);
	if (!strcmp(str, ft_str))
		printf("OK !\n");
	else
		printf("KO...\n");
	if (argc == 1)
	{
		printf("Original : %s\n", str);
		printf("Copie : %s\n", ft_str);
	}
}

void	test_memmove(int argc)
{
	char buffer[] = "Une phrase a copier";
	char	str[SIZE];
	char	ft_str[SIZE];
	printf("--------------------MEMMOVE--------------------\n\n");
	printf("A copier = \"%s\", size = %d : ", buffer, SIZE - 5);
	
	memset(str, 0, 10);
	memmove(str, buffer, SIZE - 5);
	memset(ft_str, 0, 10);
	ft_memmove(ft_str, buffer, SIZE - 5);
	if (!strcmp(str, ft_str))
		printf("OK !\n");
	else
		printf("KO...\n");
	if (argc == 1)
	{
		printf("Original : %s\n", str);
		printf("Copie : %s\n", ft_str);
	}
}

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

	chars = malloc((SIZE + 1) * sizeof(char));
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
	chars[SIZE] = '\0';
	return (chars);
}

int	*test_nums(void)
{
	int	*nums;

	nums = malloc(SIZE * sizeof(int));
	nums[0] = 0;
	nums[1] = 10;
	nums[3] = -10;
	nums[SIZE / 2] = 50;
	nums[3] = -50;
	nums[2] = 65;
	nums[4] = -65;
	nums[6] = 100;
	nums[7] = -100;
	nums[8] = 2147483647;
	nums[9] = -2147483648;
	return (nums);
}

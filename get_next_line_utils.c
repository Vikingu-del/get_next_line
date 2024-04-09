/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 13:54:48 by eseferi           #+#    #+#             */
/*   Updated: 2024/04/09 19:31:08 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	get_ft_strlen(char *s)
{
	size_t	counter;

	counter = 0;
	while (s[counter])
		counter++;
	return (counter);
}

char	*get_ft_strchr(char *s, int c)
{
	if (!s)
		return (0);
	if (c == '\0')
		return ((char *)&s[get_ft_strlen(s)]);
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	return (0);
}
/*
	if string contains only a \0, then return the size of
	the string, which is 1
*/

char	*get_ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*get_ft_strjoin(char *str_static, char *buffer)
{
	unsigned int	len;
	char			*str;

	if (!str_static)
	{
		str_static = (char *)malloc(1 * sizeof(char));
		str_static[0] = '\0';
	}
	if (!str_static || !buffer)
		return (NULL);
	len = get_ft_strlen(str_static) + get_ft_strlen(buffer);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (0);
	get_ft_strcpy(str, str_static);
	len = get_ft_strlen(str_static);
	get_ft_strcpy(&str[len], buffer);
	return (free(str_static), str);
}
/*
	- a regular strjoin with some additional extras
		- if str_static empty or has an error, allocate memory of size 1 and put in 
		that string \0 inside, str_static is always the static string, for the 
		beginning it's empty
		- free (str_static) because we dont need it anymore, ft_strjoin returns the 
		string, that will be the new static string, buffer will be freed in
		ft_read_buffer
	- free(str_static) is str in ft_read_buffer that should be freed
*/

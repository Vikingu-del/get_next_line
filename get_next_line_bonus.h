/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 13:55:20 by eseferi           #+#    #+#             */
/*   Updated: 2024/04/09 19:33:00 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

size_t			get_ft_strlen(char *str);

char			*get_ft_strchr(char *s, int c);
char			*get_ft_strjoin(char *str_static, char *buffer);
char			*get_next_line(int fd);
char			*ft_print_line(char *str_static);
char			*ft_next_buffer(char *str_static);
char			*get_ft_strcpy(char *dest, char *src);
char			*ft_read_buffer(int fd, char *str_static);

#endif

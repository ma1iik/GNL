/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misrailo <misrailo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 17:33:26 by misrailo          #+#    #+#             */
/*   Updated: 2022/02/23 20:04:32 by misrailo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
//# ifndef BUFFER_SIZE
//#  define BUFFER_SIZE 10
//# endif

# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <fcntl.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

char	*first_line(int fd, char *saveline);
char	*clean_line(char *s);
char	*ft_save_line(char *s);
char	*get_next_line(int fd);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(char *src);
size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *str, int c);

#endif
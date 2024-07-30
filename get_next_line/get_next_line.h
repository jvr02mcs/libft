/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrubio-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 18:30:26 by jrubio-m          #+#    #+#             */
/*   Updated: 2023/12/01 18:30:30 by jrubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stddef.h>
# include <fcntl.h>
# include <stdio.h>

char	*ft_strdup(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
int		ft_strlen_gnl(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t n);
void	newstat(char *stat);
char	*get_next_line(int fd);

#endif

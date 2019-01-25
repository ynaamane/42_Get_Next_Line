/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynaamane <ynaamane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 12:40:44 by ynaamane          #+#    #+#             */
/*   Updated: 2019/01/18 12:38:39 by ynaamane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 42
# include "libft/libft.h"
# include <limits.h>
# include <fcntl.h>

int		get_next_line(const int fd, char **line);
int		ft_new_line(char **s, char **line, int fd, int ret);

#endif

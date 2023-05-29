#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H


#ifndef BUFFER_SIZE
# define BUFFER_SIZE 1
#endif

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

char*	get_next_line(int fd);
int	ft_strlen(const char *s);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchr(const char *s, int c);
char *ft_well_read(int fd, ssize_t player, char *buffer, char *stash);
int	ft_where_backslash_n(char *str);
char *line_return(char *stash);
char	*ft_substr(char const *s, int start, int len);
void	ft_bzero(void *s, int n);
void	*ft_calloc(size_t count, size_t size);
char *line_return(char *stash);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlocusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:44:01 by nlocusso          #+#    #+#             */
/*   Updated: 2022/10/03 12:14:51 by nlocusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

void			ft_putnbr_base_ptr(unsigned long nbr, void *base);
void			ft_putnbr_unsign(unsigned int nb);
void			ft_putstr(char *str);
void			ft_putchar(char c);
void			ft_putnbr(int nb);
void			ft_putnbr_base(int nbr, char *base);
char			*ft_strrchr(const char *str, int searchedChar);
char			*ft_strchr(const char *str, int searchedChar);
void			ft_bzero(void *s, size_t n);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
void			*ft_memchr(const void *mem, int SearchedChar, size_t size);
void			*ft_memcpy(void	*dest, const void *src, size_t size);
void			*ft_memset(void *pt, int value, size_t count);
char			*ft_strchr(const char *str, int searchedChar);
size_t			ft_strlcat(char *dest, const char *src, size_t size);
size_t			ft_strlcpy(char *dest, const char *src, size_t size);
size_t			ft_strlen(const char *str);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_tolower(int c);
int				ft_toupper(int c);
char			*ft_strdup(const char *src);
int				ft_atoi(const char *Str);
void			*ft_calloc(size_t elementCount, size_t elementSize);
char			*ft_strnstr(const char *big, const char *little, size_t len);
int				ft_memcmp(const void *pt1, const void *pt2, size_t size);
void			*ft_memmove(void *dest, const void *src, size_t size);
/*Part II*/
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *str, char charset);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
/*Part Bonus*/
t_list			*ft_lstnew(void *content);
void			ft_lstadd_front(t_list **lst, t_list *new);
int				ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void*));
void			ft_lstclear(t_list **lst, void (*del)(void*));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));
#endif

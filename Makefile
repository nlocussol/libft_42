# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nlocusso <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/26 17:13:34 by nlocusso          #+#    #+#              #
#    Updated: 2022/10/03 13:33:47 by nlocusso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= ft_putnbr_unsign.c \
	ft_putnbr_base.c ft_putnbr.c ft_putnbr_base_ptr.c ft_putstr.c ft_putchar.c \
	ft_putnbr_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putchar_fd.c \
	ft_striteri.c ft_strmapi.c ft_itoa.c ft_split.c ft_strtrim.c ft_strjoin.c \
	ft_substr.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
	ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
	ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strncmp.c ft_strrchr.c \
	ft_strlen.c ft_tolower.c ft_toupper.c ft_strnstr.c ft_atoi.c ft_calloc.c
 
BSRCS	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
		  ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS		= ${SRCS:.c=.o}

BOBJS		= ${BSRCS:.c=.o}

NAME		= libft.a

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

all :        ${NAME}

.c.o :		${OBJS}
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
	
${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}

bonus :		${BOBJS} ${OBJS}
			ar rc ${NAME} ${BOBJS} ${OBJS}
clean :
			rm -f ${OBJS} ${BOBJS}

fclean :	clean
			rm -f ${NAME} 

re :        fclean all

.PHONY : all clean fclean re bonus

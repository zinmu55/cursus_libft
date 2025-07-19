# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shintarokohtake <shintarokohtake@studen    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/18 11:04:36 by yonuma            #+#    #+#              #
#    Updated: 2025/07/19 10:56:02 by shintarokoh      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

MANDATORY =	ft_isascii.c \
			ft_isprint.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isdigit.c \
			ft_strlen.c \
			ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_toupper.c\
			ft_tolower.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strncmp.c \
			ft_atoi.c \
			ft_strnstr.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c

BONUS =	ft_lstnew.c \
        ft_lstadd_front.c \
        ft_lstsize.c \
        ft_lstlast.c \
        ft_lstadd_back.c \
        ft_lstdelone.c \
        ft_lstclear.c \
        ft_lstiter.c \
        ft_lstmap.c 

MANDATORY_SRCS = $(addprefix srcs/, $(MANDATORY))
MANDATORY_OBJS = $(MANDATORY_SRCS:.c=.o)
BONUS_SRCS = $(addprefix srcs/, $(BONUS))
BONUS_OBJS = $(BONUS_SRCS:.c=.o)
RM = rm -f
CC = cc -c
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I includes
AR = ar rc



all : $(NAME)

$(NAME) : $(MANDATORY_OBJS)
	$(AR) $@ $^
	ranlib $(NAME)

bonus : $(MANDATORY_OBJS) $(BONUS_OBJS)
	$(AR) $(NAME) $^
	ranlib $(NAME)

%.o:%.c
	$(CC) $(CFLAGS) $(INCLUDES) $< -o $@

clean : 
	$(RM) $(MANDATORY_OBJS) $(BONUS_OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

rebonus : fclean bonus

.PHONY : all clean fclean re bonus rebonus

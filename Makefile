SRCS			=	lib/ft_strdup.c lib/ft_strlen.c lib/ft_memcpy.c lib/ft_itoa.c lib/ft_calloc.c \
					lib/ft_memset.c lib/ft_inttobase.c lib/ft_isalpha.c lib/ft_tolower.c \
					src/ft_printf_utils1.c src/ft_printf_utils2.c \
					ft_printf.c main.c
OBJS			= $(SRCS:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libftprintf.a

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) $(SRCS) -g -o output
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME) output

re:				fclean $(NAME)
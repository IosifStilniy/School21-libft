SRCS	=	ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_is.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_strchr.c \
			ft_strdup.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_itoa.c \
			ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c \
			ft_split.c \
			ft_striteri.c \
			ft_strjoin.c \
			ft_strmapi.c \
			ft_strtrim.c \
			ft_substr.c \

B_SRCS	=	ft_lstadd_back_bonus.c \
			ft_lstadd_front_bonus.c \
			ft_lstclear_bonus.c \
			ft_lstdelone_bonus.c \
			ft_lstiter_bonus.c \
			ft_lstlast_bonus.c \
			ft_lstmap_bonus.c \
			ft_lstnew_bonus.c \
			ft_lstsize_bonus.c \

OBJS	= $(SRCS:.c=.o)

B_OBJS	= $(B_SRCS:.c=.o)

HEADS	= libft.h

NAME	= libft.a

GCC		= gcc -g -c -Wall -Wextra -Werror

AR		= ar -crs

RM		= rm -f

.c.o: 
			$(GCC) $< -o ${<:.c=.o} -I$(HEADS)

$(NAME):	$(OBJS) $(HEADS)
			$(AR) $(NAME) $(OBJS)

all:		$(NAME)

bonus:		all $(B_OBJS) $(HEADS)
			$(AR) $(NAME) $(B_OBJS)

clean:
			$(RM) $(OBJS) $(B_OBJS)

fclean: 	clean
			$(RM) $(NAME)

re:			fclean all bonus
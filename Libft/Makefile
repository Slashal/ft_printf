CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
NAME = libft.a

LIB_SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c ft_split.c ft_putnbr_fd.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putendl_fd.c

LIB_OBJS = $(LIB_SRCS:.c=.o)

LIB_SRCS_BONUS = ft_lstadd_front_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

LIB_OBJS_BONUS = $(LIB_SRCS_BONUS:.c=.o)

all: $(NAME)

$(NAME): $(LIB_OBJS)
	ar rc $(NAME) $(LIB_OBJS)
	@echo "██╗     ██╗██████╗ ███████╗████████╗"
	@echo "██║     ██║██╔══██╗██╔════╝╚══██╔══╝"
	@echo "██║     ██║██████╔╝█████╗     ██║   "   
	@echo "██║     ██║██╔══██╗██╔══╝     ██║   "   
	@echo "███████╗██║██████╔╝██║        ██║   "
	@echo "╚══════╝╚═╝╚═════╝ ╚═╝        ╚═╝   "   
                                                  
bonus: $(LIB_OBJS) $(LIB_OBJS_BONUS)
			ar rcs $(NAME) $(LIB_OBJS) $(LIB_OBJS_BONUS)
clean:
	$(RM) $(LIB_OBJS) $(LIB_OBJS_BONUS)
fclean: clean
	$(RM) $(NAME)
re: fclean all


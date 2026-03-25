NAME = libft.a
FILENAMES = ft_strncmp ft_isprint ft_strrchr ft_memmove ft_isascii ft_isalnum ft_isalpha ft_strlcat ft_memcpy ft_strlcpy ft_toupper ft_memchr ft_strnstr ft_isdigit ft_strlen ft_tolower ft_strdup ft_substr ft_memcmp ft_atoi ft_calloc ft_strchr ft_memset ft_bzero ft_strjoin ft_strtrim ft_split ft_itoa ft_strmapi ft_striteri ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast ft_lstadd_back ft_lstdelone ft_lstclear ft_lstiter ft_lstmap

OBJECTS = $(FILENAMES:%=%.o)
FILES = $(FILENAMES:%=%.c)
CFLAGS = -Wall -Werror -Wextra -g

all: $(OBJECTS) $(NAME)

$(OBJECTS):
	cc -c $(CFLAGS) $(FILES) -Wall -Werror -Wextra

$(NAME):
	ar rc $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

crun: re
	cc $(CFLAGS) combined_main.c libft.a; ./a.out

cleanrun: re
	make clean; $(CFLAGS) cc combined_main.c libft.a; ./a.out

frun:
	cc $(CFLAGS) combined_main.c libft.a; ./a.out

frune:
	cc $(CFLAGS) combined_main.c libft.a; ./a.out | cat -e

pushgit:
	make clean; git add *; git commit -m "push"; git push

gdb:
	cc -g ft*.c combined_main.c; gdb a.out

debug:
	cc -g ft*.c combined_main.c;

norm:
	watch -n1 norminette $(FILES)
NAME = libft.a
FILENAMES = ft_strncmp ft_isprint ft_strrchr ft_memmove ft_isalnum ft_isalpha ft_strlcat ft_memcpy ft_strlcpy ft_toupper ft_memchr ft_strnstr ft_isdigit ft_strlen ft_tolower ft_strdup ft_substr ft_memcmp ft_atoi ft_calloc ft_strchr ft_memset ft_bzero ft_strjoin ft_strtrim

OBJECTS = $(FILENAMES:%=%.o)
FILES = $(FILENAMES:%=%.c)

all: $(NAME) $(OBJECTS)

$(NAME): $(OBJECTS)
	cc -c $(FILES) -Wall -Werror -Wextra
	ar rc $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

crun: re
	cc main.c libft.a; ./a.out
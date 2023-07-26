SRC_FILES =	main.c \
			ft_function.c \
			operators.c \
			atoi.c

SRCS =		$(SRC_FILES)
O_FILES =	$(SRC_FILES:.c=.o)

CC =		cc
CFLAGS =	-Wall -Wextra -Werror
INC_FLAGS =	-I.

NAME =	do-op

$(NAME):	$(O_FILES)
		$(CC) $(CFLAGS) $(O_FILES) -o $(NAME)

.c.o:
		$(CC) $(CFLAGS) $(INC_FLAGS) -c $< -o $@

clean:
		rm -rf $(O_FILES)

fclean:		clean
		rm -f $(NAME)

.PHONY: clean fclean


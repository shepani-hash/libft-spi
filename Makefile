NAME = libft.a
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)

%.o : %.c libft.h
	cc -Wall -Wextra -Werror -c $<

clean :
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re : fclean all

.PHONY : clean

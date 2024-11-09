NAME = libft.a

SRC = $(wildcard *.c)
DFK = clear

OBJ = $(SRC:.c=.o)

all: 
	@touch $(OBJ)
	clear
fclean:
	@rm $(OBJ)

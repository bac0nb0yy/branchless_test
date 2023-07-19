NAME = diff

CC = cc
SRC =	with_branch.c \
		without_branch.c \
		main.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

clean :
	rm -rf $(OBJ) $(OBJ_BONUS)

fclean : clean
	rm -rf $(NAME) $(BONUS) *.o .nfs*

re : fclean all

%.o : %.c
	$(CC) -o $@ -c $^
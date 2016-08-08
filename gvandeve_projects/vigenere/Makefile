NAME	= vigenere

SRCS	= srcs

INC	= includes

SRCSF	= $(SRCS)/*.c

FLAGS	= -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -o $(NAME) $(SRCSF) -I $(INC);

clean:
	rm -f $(NAME);

fclean: clean

re: fclean all

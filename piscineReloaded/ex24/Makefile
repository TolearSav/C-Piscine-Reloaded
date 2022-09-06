NAME = libft.a
SRCS = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c
OBJECTS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
HEADERS = ./includes/
FLAGS = -Wall -Wextra -Werror
REMOVE = rm -rf

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)
$(OBJECTS):
	gcc $(FLAGS) -I $(HEADERS) -c $(SRCS)
clean:
	$(REMOVE) *.o
fclean: clean
		$(REMOVE) $(NAME)
re: fclean all
	

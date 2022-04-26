NAME =

SRCS =

FLAGS = -Wall -Wextra -Werror -c -std=c++98

OBJS = $(SRCS:.cpp=.o)

INC = 

CC = clang++

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(FLAGS) $(SRCS)
	@$(CC) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
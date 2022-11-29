NAME = Harl_2.0
SRCS = main.cpp Harl.cpp Harl.hpp
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
OBJS = $(SRCS:.cpp=.o)

.cpp.o:
	$(CC) $(FLAGS) -c $< -o $(<:.cpp=.o)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

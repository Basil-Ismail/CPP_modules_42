SRCS = main.cpp
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98
NAME = PtrVsRef
OBJS= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) -o $(NAME)
%.o:%.cpp
	$(CC)  $(SRCS) $(CFLAGS) -c 
clean: 
	rm -f  $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

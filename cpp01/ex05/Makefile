NAME	= human

CC		= clang++

CFLAGS	= -Wall -Wextra -Werror

OBJS	= $(SRCS:%.cpp=%.o)

SRCS	= main.cpp Brain.cpp  Human.cpp

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

.cpp.o:
	$(CC) $(CFLAGS) -c $<


all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re


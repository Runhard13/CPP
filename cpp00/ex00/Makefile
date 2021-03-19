NAME	= megaphone

CC		= clang++

CFLAGS	= -Wall -Wextra -Werror

OBJS	= $(SRCS:%.cpp=%.o)


SRCS	= megaphone.cpp

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)


all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re


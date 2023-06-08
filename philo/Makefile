NAME		=	./philo
HEADERFILE	=	philosophers.h

SRC_FILES	=	

CC			=	cc
FLAGS		=	-Wall -Wextra -Werror
OBJS		=	$(SRCS:.c=.o)

all: $(NAME)

$(NAME):	$(OBJS)
			$(CC) -o $@ $(OBJS) $(FLAGS) -I $(HEADERFILE)

%.o: %.c
			$(CC) -c $(CFLAGS) -o $@ $<

clean:
			rm -f *.o

fclean:		clean
			rm -f $(NAME)

re: 		fclean all

.PHONY:		clean fclean re
NAME = logger
CC = clang++
CFLAGS = -Wall -Wextra -Werror
DEPS = Logger.hpp
SRC  = Logger.cpp main.cpp

OBJECT = $(SRC:.cpp=.o)

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJECT)
	$(CC) $(CFLAGS) $(OBJECT) -o $@
	@echo "Finished!"
	@make clean

all: $(NAME)

clean:
	@echo "Cleanning Objects..."
	@/bin/rm -f $(OBJECT)
	@echo "Cleaned Objects"

fclean: clean
	@echo "Deleting binary and log file"
	@/bin/rm -f $(NAME)
	@/bin/rm -f *.log

re: fclean all

.PHONY: all clean fclean re

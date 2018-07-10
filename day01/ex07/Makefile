NAME = reading
CC = clang++
CFLAGS = -Wall -Wextra -Werror
DEPS = Reading.class.hpp
SRC  = Reading.class.cpp main.cpp

OBJECT = $(SRC:.cpp=.o)

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJECT)
	$(CC) $(CFLAGS) $(OBJECT) -o $@
	@echo "Finished!"

all: $(NAME)

clean:
	@echo "Cleanning..."
	@/bin/rm -f $(OBJECT)
	@echo "Cleaned"

fclean: clean
	@/bin/rm -f $(NAME)
	@/bin/rm -f *.replace

re: fclean all

.PHONY: all clean fclean re

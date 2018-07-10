NAME = poly
CC = clang++
CFLAGS = -Wall -Wextra -Werror
DEPS = Peon.hpp Sorcerer.hpp Victim.hpp
SRC  = Peon.cpp Sorcerer.cpp Victim.cpp main.cpp

OBJECT = $(SRC:.cpp=.o)

%.o: %.cpp $(DEPS)
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

re: fclean all

.PHONY: all clean fclean re

NAME = phonebook
CC = clang++
CFLAGS = -Wall -Wextra -Werror
DEPS = PhoneBook.class.hpp Entry.class.hpp main.h structs.h
SRC  = PhoneBook.class.cpp Entry.class.cpp main.cpp

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

re: fclean all

.PHONY: all clean fclean re

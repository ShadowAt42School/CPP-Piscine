NAME = ex03
CC = clang++
CFLAGS = -Wall -Wextra -Werror
DEPS = NinjaTrap.hpp FragTrap.hpp ScavTrap.hpp ClapTrap.hpp
SRC  = NinjaTrap.cpp ClapTrap.cpp FragTrap.cpp ScavTrap.cpp main.cpp

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

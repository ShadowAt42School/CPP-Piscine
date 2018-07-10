NAME = ex01
CC = clang++
CFLAGS = -Wall -Wextra -Werror -g -std=c++98 -pedantic
DEPS = Base.hpp A.hpp B.hpp C.hpp
SRC  = Base.cpp A.cpp B.cpp C.cpp main.cpp

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

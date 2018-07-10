NAME = poly
CC = clang++
CFLAGS = -Wall -Wextra -Werror -g
DEPS = Bureaucrat.hpp Form.hpp PresidentialPardonForm.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp Intern.hpp OfficeBlock.hpp CentralBureaucracy.hpp
SRC  = Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp Intern.cpp OfficeBlock.cpp CentralBureaucracy.cpp main.cpp

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
	@/bin/rm -f *.tree

re: fclean all

.PHONY: all clean fclean re

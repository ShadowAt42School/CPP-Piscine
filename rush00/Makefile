NAME= ft_retro
CC= clang++
CFLAGS= -Wall -Wextra -Werror
INC = -I./includes -I./interfaces

INTERPATH = ./interfaces/
INTER =	IShip.interface.hpp IWeapon.interface.hpp IBullet.interface.hpp IBoundingBox.interface.hpp
INTERR = $(patsubst %, $(INTERPATH)%, $(INTER))


CLSPATH = ./includes/
CLS = Ship.class.hpp Engenium.ship.class.hpp \
			BoundingBox.class.hpp \
			Weapon.class.hpp RailGun.class.hpp \
			Bullet.class.hpp LineStyle.bullet.class.hpp \
			Player.class.hpp \
			Game.system.class.hpp Board.system.class.hpp

CLSR = $(patsubst %, $(CLSPATH)%, $(CLS))

DEPS = $(INTERR) $(CLSR)

SRCPATH = src/
SRC  =	Ship.class.cpp Engenium.ship.class.cpp \
		BoundingBox.class.cpp \
		Weapon.class.cpp RailGun.class.cpp \
		Bullet.class.cpp LineStyle.bullet.class.cpp \
		Player.class.cpp \
		Game.system.class.cpp Board.system.class.cpp \
		main.cpp

SRCS = $(patsubst %, $(SRCPATH)%, $(SRC))

OBJECT = $(SRCS:.cpp=.o)

%.o: %.cpp $(DEPS)
	$(CC) $(CFLAGS) $(INC) -g -c -o $@ $<

$(NAME): $(OBJECT)
	@$(CC) $(CFLAGS) -lncurses $(INC) $(OBJECT) -o $@
	echo "Finished!"

all: $(NAME)

clean:
	@echo "Cleanning..."
	@/bin/rm -f $(OBJECT)
	@echo "Cleaned"

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

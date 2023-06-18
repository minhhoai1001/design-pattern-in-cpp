CFLAGS = -I. -std=c++14

SRC = \
	src/display.cpp \
	src/manager.cpp \
	src/frameDisplay.cpp \
	src/underLineDisplay.cpp \
	main.cpp

PROG = prototype

.PHONY: all
all: $(SRC)
	g++ $(CFLAGS) $(SRC) -o $(PROG)

.PHONY: clean
clean:
	rm -rf $(PROG)
CFLAGS = -I. -std=c++14

SRC = \
	src/display.cpp \
	src/displayImpl.cpp \
	src/multiLineDisplay.cpp \
	src/textDisplayImpl.cpp \
	main.cpp

PROG = bridge

.PHONY: all
all: $(SRC)
	g++ $(CFLAGS) $(SRC) -o $(PROG)

.PHONY: clean
clean:
	rm -rf $(PROG)
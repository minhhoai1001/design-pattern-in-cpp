CFLAGS = -I. -std=c++14

SRC = \
	src/display.cpp \
	src/frame.cpp \
	src/fullFrame.cpp \
	src/messageDisplay.cpp \
	src/sideFrame.cpp \
	main.cpp

PROG = decorator

.PHONY: all
all: $(SRC)
	g++ $(CFLAGS) $(SRC) -o $(PROG)

.PHONY: clean
clean:
	rm -rf $(PROG)
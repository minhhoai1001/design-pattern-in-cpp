CFLAGS = -I. -std=c++14

SRC = \
	src/messageDisplay.cpp \
	src/print.cpp \
	src/printMessageDisplay.cpp \
	main.cpp

PROG = adapter

.PHONY: all
all: $(SRC)
	g++ $(CFLAGS) $(SRC) -o $(PROG)

.PHONY: clean
clean:
	rm -rf $(PROG)
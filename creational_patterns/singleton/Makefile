CFLAGS = -I. -std=c++14

SRC = \
	singleton.cpp \
	main.cpp

PROG = singleton

.PHONY: all
all: $(SRC)
	g++ $(CFLAGS) $(SRC) -o $(PROG)

.PHONY: clean
clean:
	rm -rf $(PROG)
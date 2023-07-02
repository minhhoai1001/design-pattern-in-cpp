CFLAGS = -I. -std=c++14

SRC = \
	largeSizeChar.cpp \
	largeSizeCharFactory.cpp \
	largeSizeString.cpp \
	main.cpp

PROG = flyweight

.PHONY: all
all: $(SRC)
	g++ $(CFLAGS) $(SRC) -o $(PROG)

.PHONY: clean
clean:
	rm -rf $(PROG)
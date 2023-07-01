CFLAGS = -I. -std=c++14

SRC = \
	src/dataLibrary.cpp \
	src/htmlWriter.cpp \
	src/pageCreator.cpp \
	main.cpp

PROG = facade

.PHONY: all
all: $(SRC)
	g++ $(CFLAGS) $(SRC) -o $(PROG)

.PHONY: clean
clean:
	rm -rf $(PROG)
CFLAGS = -I. -std=c++14

SRC = \
	src/lazySupporter.cpp \
	src/limitedSupporter.cpp \
	src/moodySupporter.cpp \
	src/specialSupporter.cpp \
	src/supporter.cpp \
	src/trouble.cpp \
	main.cpp

PROG = chain_of_responsibility

.PHONY: all
all: $(SRC)
	g++ $(CFLAGS) $(SRC) -o $(PROG)

.PHONY: clean
clean:
	rm -rf $(PROG)
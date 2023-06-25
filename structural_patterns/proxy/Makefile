CFLAGS = -I. -std=c++14

SRC = \
	src/printer.cpp \
	src/proxyPrinter.cpp \
	src/realPrinter.cpp \
	main.cpp

PROG = proxy

.PHONY: all
all: $(SRC)
	g++ $(CFLAGS) $(SRC) -o $(PROG)

.PHONY: clean
clean:
	rm -rf $(PROG)
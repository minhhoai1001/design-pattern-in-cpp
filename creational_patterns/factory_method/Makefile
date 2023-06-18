CFLAGS = -I. -std=c++14

SRC = \
	src/factory.cpp \
	src/product.cpp \
	src/creditCard.cpp \
	src/creditCardFactory.cpp \
	main.cpp

PROG = factory_method

.PHONY: all
all: $(SRC)
	g++ $(CFLAGS) $(SRC) -o $(PROG)

.PHONY: clean
clean:
	rm -rf $(PROG)
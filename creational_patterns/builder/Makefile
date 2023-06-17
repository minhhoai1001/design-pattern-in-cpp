CFLAGS = -I. -std=c++14

SRC = \
	src/builder.cpp \
	src/director.cpp \
	src/htmlBuilder.cpp \
	src/plainTextBuilder.cpp \
	main.cpp

PROG = builder

.PHONY: all
all: $(SRC)
	g++ $(CFLAGS) $(SRC) -o $(PROG)

.PHONY: clean
clean:
	rm -rf $(PROG)
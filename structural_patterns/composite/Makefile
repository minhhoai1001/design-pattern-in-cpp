CFLAGS = -I. -std=c++14

SRC = \
	src/directory.cpp \
	src/file.cpp \
	src/fileSystemElement.cpp \
	main.cpp

PROG = composite

.PHONY: all
all: $(SRC)
	g++ $(CFLAGS) $(SRC) -o $(PROG)

.PHONY: clean
clean:
	rm -rf $(PROG)
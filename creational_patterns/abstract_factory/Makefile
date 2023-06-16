CFLAGS = -I. -std=c++14

SRC = \
	factory/data.cpp \
	factory/factory.cpp \
	factory/item.cpp \
	factory/link.cpp \
	factory/page.cpp \
	list_factory/list_data.cpp \
	list_factory/list_factory.cpp \
	list_factory/list_link.cpp \
	list_factory/list_page.cpp \
	table_factory/table_data.cpp \
	table_factory/table_page.cpp \
	table_factory/table_link.cpp \
	table_factory/table_factory.cpp \
	main.cpp

PROG = abstract_factory

.PHONY: all
all: $(SRC)
	g++ $(CFLAGS) $(SRC) -o $(PROG)

.PHONY: clean
clean:
	rm -rf $(PROG)
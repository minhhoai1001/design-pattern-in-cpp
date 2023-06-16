#include <iostream>
#include <memory>
#include "factory/data.h"
#include "factory/factory.h"
#include "factory/link.h"
#include "factory/page.h"
#include "list_factory/list_factory.h"
#include "table_factory/table_factory.h"

int main(int argc, char* argv[]) 
{
    std::cout << "Please enter a number (1 or 2):" << endl
        << "  1: Create objects by using ListFactory" << endl
        << "  2: Create objects by using TableFactory" << endl;
    int number = 0;
    std::cin >> number;

    std::shared_ptr<Factory> factory;
    if (number == 1) 
    {
        factory = shared_ptr<Factory>(new ListFactory());
    }
    else if (number == 2) 
    {
		factory = shared_ptr<Factory>(new TableFactory());
	}
    else {
        std::cerr << "The value is not 1 or 2." << endl;
        exit(1);
    }

    std::shared_ptr<Link> washington_post(factory->createLink("The Washington Post", "https://www.washingtonpost.com/"));
    std::shared_ptr<Link> new_york_times(factory->createLink("The NewYork Times", "https://www.nytimes.com/"));
    std::shared_ptr<Link> financial_times(factory->createLink("The Financial Times", "https://www.ft.com/"));

    std::shared_ptr<Data> newspaper(factory->createData("Newspaper"));
    newspaper->add(washington_post.get());
    newspaper->add(new_york_times.get());
    newspaper->add(financial_times.get());

	shared_ptr<Link> bing(factory->createLink("Yahoo!", "https://www.bing.com/"));
	shared_ptr<Link> google(factory->createLink("Google", "https://www.google.com/"));

    shared_ptr<Data> search_engine(factory->createData("Search engine"));
	search_engine->add(bing.get());
	search_engine->add(google.get());

    std::shared_ptr<Page> link_page(factory->createPage("Linkpage", "James Smith"));
    link_page->add(newspaper.get());
    link_page->add(search_engine.get());
    
    link_page->output();

    return 0;
}
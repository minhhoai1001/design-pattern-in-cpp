#include <iostream>
#include <memory>
#include "include/directory.h"
#include "include/file.h"

int main(int argc, char* argv[])
{
    std::cout<< "Create a file system...\n";
    std::unique_ptr<Directory> bin_dir (new Directory("bin"));
    std::unique_ptr<File> ls_file(new File("ls", 20));
    bin_dir->add(ls_file.get());
    std::unique_ptr<File> mkdir_file(new File("mkdir", 40));
    bin_dir->add(mkdir_file.get());

    std::unique_ptr<Directory> emily_dir (new Directory("emily"));
    std::unique_ptr<File> homework_file(new File("homework.doc", 60));
    emily_dir->add(homework_file.get());

    std::unique_ptr<Directory> james_dir (new Directory("james"));
    std::unique_ptr<File> app_file(new File("app.exe", 80));
    james_dir->add(app_file.get());

    std::unique_ptr<Directory> home_dir(new Directory("home"));
    home_dir->add(emily_dir.get());
    home_dir->add(james_dir.get());

    std::unique_ptr<Directory> root_dir(new Directory("root"));
    root_dir->add(home_dir.get());
    root_dir->add(bin_dir.get());

    root_dir->print("");

    return 0;
}
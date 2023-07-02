#include "largeSizeString.h"
#include <iostream>
#include <string>
#include <memory>

int main(int argc, char* argv[]) {
    cout << "Please enter digits (ex. 1212123):" << endl;
    string input_value = "";
    cin >> input_value;

    unique_ptr<LargeSizeString> lss(new LargeSizeString(input_value));
    lss->display();

    return 0;
}
#include <iostream>

int main() {
    std::string brain = "HI THIS IS BRAIN";
    std::string *stringPTR = &brain;
    std::string &stringREF = brain;

    std::cout << "String address =                  " << &brain << std::endl;
    std::cout << "stringPTR content =               " << stringPTR << std::endl;
    std::cout << "stringREF content =               " << &stringREF << std::endl;
    std::cout << "String value =                    " << brain << std::endl;
    std::cout << "value pointed by stringPTR =      " << *stringPTR << std::endl;
    std::cout << "value pointed by stringREF =      " << stringREF << std::endl;

    return 0;
}
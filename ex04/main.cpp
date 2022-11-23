#include <iostream>
#include <fstream>
#include <string>

int check_args(int argc) {
    if (argc < 4) {
        std::cout << "Too few arguments" << std::endl;
        return 1;
    }
    else if (argc > 4) {
        std::cout << "Too much arguments" << std::endl;
        return 1;
    }
    else
        return 0;
}

int main(int argc, char **argv) {
    if (check_args(argc))
        return 1;

    std::ifstream ifs(argv[1]);
    std::string infile = argv[1];
    std::ofstream ofs(infile + ".replace");
    if (ifs.fail()) {
        std::cout << "Fail to open " << infile << std::endl;
        return 1;
    }
    std::string line;
    std::string to_replace = argv[2];
    std::string str = argv[3];
    while (getline(ifs, line))
    {
        size_t pos = line.find(to_replace, 0);
        while (pos != std::string::npos)
        {
            line.erase(pos, to_replace.length());
            line.insert(pos, str);
            pos = line.find(to_replace, pos + str.length());
        }
        ofs << line << std::endl;
    }
    ifs.close();
    ofs.close();
    return 0;
}
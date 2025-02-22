#include <fstream>
#include <iostream>
#include <sstream>

bool argcsErrors(int argc)
{
    if (argc != 4) {
        std::cerr << "Not enough args" << std::endl;
        return true;
    }
    return false;
}

std::string replace(std::string& fileContent, std::string old, std::string newer)
{
    int i = 0;

    while (old.length() && (i = fileContent.find(old, i)) != -1) {
        fileContent.erase(i, old.length());
        fileContent.insert(i, newer);
        i += newer.length();
    }
    return (fileContent);
}

int main(int argc, char** argv)
{

    if (argcsErrors(argc))
        return 1;
    std::ifstream Myfile(argv[1]);
    if (!Myfile.is_open()) {
        std::cerr << "File is not valid or can't be opened " << std::endl;
        return 2;
    }
    std::string newName(argv[1]);
    std::ofstream newFile(newName.append(".replace").c_str());
    std::stringstream buffer;

    buffer << Myfile.rdbuf();
    std::string fileContent = buffer.str();
    if (fileContent.empty())
        std::cerr << "Empty File." << std::endl;
    else {
        fileContent = replace(fileContent, argv[2], argv[3]);
        newFile << fileContent;
    }
    Myfile.close();
    return (0);
}

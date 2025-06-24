#include <utils.hpp>

static bool checkFirstline(std::string line)
{
}

std::stringstream checkValidFile(char *fileName)
{
    if (!fileName)
        return std::stringstream();

    std::ifstream file(fileName);
    if (!file.is_open())
        throw std::runtime_error("Error: Could not Open file" + std::string(fileName));

    std::stringstream buffer;
    std::string line;
    buffer << file.rdbuf();

    bool firstLine = true;

    while (std::getline(file, line))
    {
        if (firstLine)
        {
            checkFirstLine(line);
            buffer << line << std::endl;
        }
    }
    if (buffer.str().empty())
        throw std::runtime_error("Error: file is empty");

    return buffer;
}
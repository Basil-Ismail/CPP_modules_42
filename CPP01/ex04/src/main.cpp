#include <iostream>
#include <fstream>
#include <sstream>

bool argcsErrors(int argc, char **argv)
{
	(void)argv;
	if (argc != 4)
	{
		std::cerr << "Not enough args" << std::endl;
		return true;
	}
	return false;
}

std::string replace(std::string &fileContent, std::string old, std::string newer)
{
	std::string newString;
	int i = fileContent.find(old);

	while (old.length() && (i = fileContent.find(old)) != -1)
	{
		fileContent.erase(i, old.length());
		fileContent.insert(i, newer);
	}
	return (fileContent);
}

int main(int argc, char **argv)
{

	if (argcsErrors(argc, argv))
		return 1;
	std::ifstream Myfile(argv[1]);
	if (!Myfile.is_open())
	{
		std::cerr << "File is not valid or can't be opened " << std::endl;
		return 2;
	}
	std::stringstream buffer;
	buffer << Myfile.rdbuf();
	std::string fileContent = buffer.str();
	if (fileContent.empty())
		std::cerr << "Empty File." << std::endl;
	else
	{
		fileContent = replace(fileContent, argv[2], argv[3]);
		std::cout << fileContent;
	}
	Myfile.close();
	return (0);
}

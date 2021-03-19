#include <iostream>
#include <fstream>

std::string megaphone(std::string str)
{
	int i = 0;
	while(str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}


std::string getFileName(std::string str)
{
	int i = 0;
	int index = 0;

	while(str[i] != '\0')
	{
		if (str[i] == '.')
			index = i;
		i++;
	}
	if (index == 0)
		return str;
	return str.substr(0, index);
}

std::string replaceString(std::string subject, const std::string& search, const std::string& replace)
{
	size_t pos = 0;
	while ((pos = subject.find(search, pos)) != std::string::npos)
	{
		subject.replace(pos, search.length(), replace);
		pos += replace.length();
	}
	return subject;
}

int main(int ac, char **av)
{
	std::string line;

	if (ac < 4)
	{
		std::cout << "Invalid arguments number" << std::endl;
		return(EXIT_FAILURE);
	}
	std::ifstream file(av[1]);
	if (!file.is_open())
		std::cout << "Can't open file" << std::endl;
	else if (std::strcmp(av[2], "") == 0)
		std::cout << "First string is empty." << std::endl;
	else if (std::strcmp(av[3], "") == 0)
		std::cout << "Second string is empty." << std::endl;
	else
	{
		std::string fileName = getFileName(av[1]);
		fileName = megaphone(fileName).append(".replace");
		std::cout << fileName << " created!" << std::endl;
		std::ofstream newFile(fileName);
		while(getline(file, line)){
			newFile << replaceString(line, av[2], av[3]) << "\n";
		}
		file.close();
		newFile.close();
		return (EXIT_SUCCESS);
	}
	file.close();
	return (EXIT_FAILURE);

}
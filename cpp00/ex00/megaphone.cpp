#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	else
	{
		for (int i = 1; i < ac; i++)
		{
			std::string str = av[i];
			{
				for (size_t j = 0; j < str.size(); j++)
					str[j] = std::toupper(str[j]);
				std::cout << str;
				if (i < ac - 1)
					std::cout << " ";
			}
		}
	}
	std::cout << std::endl;
}

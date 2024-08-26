#include "PhoneBook.hpp"

int	main()
{
	PhoneBook phoneBook;

	while (1)
	{
		std::string command;

		std::cout << "Enter a command: ";
		std::getline(std::cin, command);
		if (command == "ADD")
			phoneBook.add();
		else if (command == "SEARCH")
		 	phoneBook.search();
		else if (command == "EXIT")
			return (0);
		else
			std::cout << "Invalid command" << std::endl;
	}
	return (0);
}
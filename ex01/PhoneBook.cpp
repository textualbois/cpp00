#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	this->lastAddedContact = -1;

}

PhoneBook::~PhoneBook() {
}

void PhoneBook::add() {
	std::string& firstName = this->getLineWrapper("Enter first name");
	std::string& lastName = this->getLineWrapper("Enter last name");
	std::string& nickname = this->getLineWrapper("Enter nickname");
	std::string& phoneNumber = this->getLineWrapper("Enter phone number");
	std::string& darkestSecret = this->getLineWrapper("Enter darkest secret");


	if (this->lastAddedContact == 7)
		this->lastAddedContact = 0;
	else
		this->lastAddedContact++;
	this->contacts[this->lastAddedContact] = Contact(firstName, lastName, phoneNumber,
													nickname, darkestSecret);
}

void PhoneBook::search() {
	std::cout << "     index|first name| last name|  nickname" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if (!this->contacts[i]._isInitialized)
			continue;
		std::string firstName = this->contacts[i].getFirstName();
		std::string lastName = this->contacts[i].getLastName();
		std::string nickname = this->contacts[i].getNickname();
		std::cout << std::right;
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << this->contacts[i].getFirstName() << "|";
		std::cout << std::setw(10) << this->contacts[i].getLastName() << "|";
		std::cout << std::setw(10) << this->contacts[i].getNickname() << std::endl;
	}
	int index = this->promptIndex();
	if (index < 0 || index > 7 || !this->contacts[index]._isInitialized)
	{
		std::cout << "Invalid index" << std::endl;
		return;
	}
	std::cout << "First name: " << this->contacts[index].getFirstName() << std::endl;
	std::cout << "Last name: " << this->contacts[index].getLastName() << std::endl;
	std::cout << "Nickname: " << this->contacts[index].getNickname() << std::endl;
	std::cout << "Darkest secret: " << this->contacts[index].getDarkestSecret() << std::endl;
}

int PhoneBook::promptIndex() {
	std::string index;

	std::cout << "Select index to display: ";
	std::getline(std::cin, index);
	return (std::atoi(index.c_str()));
}

std::string PhoneBook::promptFirstName() {
	std::string firstName;

	std::cout << "Enter first name: ";
	std::getline(std::cin, firstName);
	return (firstName);
}

std::string PhoneBook::promptLastName() {
	std::string lastName;

	std::cout << "Enter last name: ";
	std::getline(std::cin, lastName);
	return (lastName);
}

std::string PhoneBook::promptNickname() {
	std::string nickname;

	std::cout << "Enter nickname: ";
	std::getline(std::cin, nickname);
	return (nickname);
}

std::string PhoneBook::promptDarkestSecret() {
	std::string darkestSecret;

	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, darkestSecret);
	return (darkestSecret);
}

std::string	PhoneBook::getLineWrapper(const std::string &prompt)
{
	std::string input;
	std::cout << prompt << ": ";
	std::getline(std::cin, input);
	if (std::cin.eof())
	{
		std::cout << std::endl;
		std::cout << "EOF detected, exiting..." << std::endl;
		exit(0);
	}
	return input;
}

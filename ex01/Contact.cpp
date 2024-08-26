#include "Contact.hpp"

Contact::Contact() {
	this->isInitialized = false;
}

Contact::Contact(const std::string firstName, const std::string lastName,
				const std::string nickname, const std::string darkestSecret) {
	this->firstName = firstName;
	this->lastName = lastName;
	this->nickname = nickname;
	this->darkestSecret = darkestSecret;
	this->isInitialized = true;
}

Contact::~Contact() {
}

void Contact::setFirstName(std::string firstName) {
	this->firstName = firstName;
}

void Contact::setLastName(std::string lastName) {
	this->lastName = lastName;
}

void Contact::setNickname(std::string nickname) {
	this->nickname = nickname;
}

void Contact::setDarkestSecret(std::string darkestSecret) {
	this->darkestSecret = darkestSecret;
}

std::string Contact::getFirstName() {
	return (this->firstName);
}

std::string Contact::getLastName() {
	return (this->lastName);
}

std::string Contact::getNickname() {
	return (this->nickname);
}

std::string Contact::getDarkestSecret() {
	return (this->darkestSecret);
}
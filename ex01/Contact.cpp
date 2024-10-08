#include "Contact.hpp"

Contact::Contact()
	:	_isInitialized(false) {
}

Contact::Contact(const std::string& firstName, const std::string& lastName,
				const std::string& nickname, const std::string& phoneNumber,
				const std::string& darkestSecret)
	:	_isInitialized(true),
		_firstName(firstName),
		_lastName(lastName),
		_nickname(nickname),
		_phoneNumber(phoneNumber),
		_darkestSecret(darkestSecret) {
}

Contact::~Contact() {
}

void Contact::setFirstName(std::string& firstName) {
	this->_firstName = firstName;
}

void Contact::setLastName(std::string& lastName) {
	this->_lastName = lastName;
}

void Contact::setNickname(std::string& nickname) {
	this->_nickname = nickname;
}

void Contact::setPhoneNumber(std::string& phoneNumber) {
	this->_phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(std::string& darkestSecret) {
	this->_darkestSecret = darkestSecret;
}

std::string Contact::getFirstName() {
	return (this->_firstName);
}

std::string Contact::getLastName() {
	return (this->_lastName);
}

std::string Contact::getNickname() {
	return (this->_nickname);
}

std::string Contact::getPhoneNumber() {
	return (this->_phoneNumber);
}

std::string Contact::getDarkestSecret() {
	return (this->_darkestSecret);
}

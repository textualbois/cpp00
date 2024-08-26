#include <string>
#include <iomanip>
#include <cstdlib>
#include "Contact.hpp"
class PhoneBook {
	public:
		PhoneBook();
		~PhoneBook();
		void add();
		void search();
		// void exit();
		std::string promptFirstName();
		std::string promptLastName();
		std::string promptNickname();
		std::string promptDarkestSecret();
		int 		promptIndex();

	private:
		Contact contacts[8];
		int lastAddedContact;
};
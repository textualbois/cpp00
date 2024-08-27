#include <string>
#include <iomanip>
#include <cstdlib>
#include "Contact.hpp"

class PhoneBook {
	public:
		PhoneBook();
		~PhoneBook();
		void		add();
		void		search();

		std::string promptFirstName();
		std::string promptLastName();
		std::string promptNickname();
		std::string promptDarkestSecret();
		int 		promptIndex();
		std::string getLineWrapper(const std::string &prompt);


	private:
		Contact	contacts[8];
		int		lastAddedContact;
};
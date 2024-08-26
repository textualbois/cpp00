#include <string>
#include <iostream>

class Contact {
	public:
		Contact();
		Contact(const std::string firstName,
				const std::string lastName,
				const std::string nickname,
				const std::string darkestSecret);
		~Contact();
		void setFirstName(std::string firstName);
		void setLastName(std::string lastName);
		void setNickname(std::string nickname);
		void setDarkestSecret(std::string darkestSecret);
		std::string getFirstName();
		std::string getLastName();
		std::string getNickname();
		std::string getDarkestSecret();
		bool isInitialized;

	private:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string darkestSecret;
};
